//
// Created by robin on 2/11/20.
//
#include <boost/thread/mutex.hpp>
#include "jack.hpp"
#include "alsa.hpp"
#include <jack/jack.h>



struct _jacksound_threading {
    boost::mutex mtx_running;
};

int jacksound_proc_callback(jack_nframes_t x, void* p) {
    return static_cast<JackSound *>(p)->callback(x, p);
}

JackSound::JackSound() : jack_client_ptr(nullptr), running(false) {
    jackthreading = new _jacksound_threading;
}

JackSound::~JackSound() {
    jack_thread.wait();
    JackSound::close();
    setPlaying(false);
}

/*
 * JACK handles a majority of the actual backend processing like latency, channels, etc.
 * We should only have to worry about copying the data from the sound sink to the output port.
 */
int JackSound::callback(jack_nframes_t nframes, void *arg) {
    if(!isPlaying()) {
        return 0;
    }

    jack_default_audio_sample_t *audin, *audout;

    core::u32 buffersz = nframes;
    core::s16 *buf = new core::s16[buffersz];
    jack_latency_range_t* jack_lat_rng = new _jack_latency_range;

    jack_port_get_latency_range(jack_port_out, JackPlaybackLatency, jack_lat_rng);

    performSoundCallback(buf, buffersz);

    auto flt_buf = s16_to_flt(buf, buffersz);

    // JACK handles the sample rate and other clerical aspects of the audio backend.

    audout = (float*)jack_port_get_buffer(jack_port_out, nframes);

    memcpy(audout, flt_buf, sizeof(jack_default_audio_sample_t) * nframes);

    applyTime(jack_lat_rng->max);

    return 0;
}

void JackSound::initialize(unsigned int sampleRate, unsigned int channels, unsigned int latency_ms) {
    /*
     * sampleRate, channels, and latency_ms are defined in the alsa spec and maintained for compatibility,
     * but are defined by the JACK server rather then the client endpoint application.
     */
    JackSound::close();

    jack_client_t* jack_cl = nullptr;
    jack_options_t jack_opt = JackNoStartServer; // Don't start the server while we are testing
    jack_status_ptr = new jack_status_t();
    const char* servername = NULL;
    const char* clientname = "famitracker";

    if((jack_cl = jack_client_open(clientname, jack_opt, jack_status_ptr, servername)) == nullptr) {
        fprintf(stderr, "jack_client_open failed,"
                        "status = 0x%2.0x\n", *jack_status_ptr);
        if(*jack_status_ptr & JackServerFailed) {
            fprintf(stderr, "Failed to connect to the JACK server.");
        }
        return;
    }
    jack_client_ptr = jack_cl;

    // Set callback
    jack_set_process_callback(jack_cl, jacksound_proc_callback, this);

    // Initialize jack port.

    jack_port_out = jack_port_register(jack_client_ptr, "output", JACK_DEFAULT_AUDIO_TYPE, JackPortIsOutput, 0);

    jack_buffer_size = jack_get_buffer_size(jack_client_ptr);

    jack_activate(jack_client_ptr);
}

void JackSound::close() {
    if(jack_client_ptr != nullptr) {
        jack_client_close(jack_client_ptr);
    }
}

void JackSound::setPlaying(bool playing) {
    bool changed = playing != isPlaying();

    if(!changed)
        return;

    SoundSink::setPlaying(playing);

}

int JackSound::sampleRate() const {
    return jack_get_sample_rate(jack_client_ptr);
}

float* s16_to_flt(const core::s16 buf[], core::u32 siz) {
    auto fltbuff = new float[siz];
    for(int x = 0; x < siz; x++) {
        float f;
        f = ((float) buf[x]) / (float)32768;
        if(f > 1) f = 1;
        if(f < -1) f = -1;
        fltbuff[x] = f;
    }

    return fltbuff;
}