//
// Created by robin on 2/11/20.
//

#ifndef FAMITRACKER_QT_JACK_HPP
#define FAMITRACKER_QT_JACK_HPP

#include <core/soundsink.hpp>
#include <jack/jack.h>
#include "soundthread.hpp"

typedef core::SoundSink core_api_SoundSink;

struct _jacksound_threading;

int jacksound_proc_callback(jack_nframes_t x, void* p);
float* s16_to_flt(const core::s16 buf[], core::u32 siz);

class JackSound : public core::SoundSinkPlayback {
public:
    JackSound();
    ~JackSound();
    void initialize(unsigned int sampleRate, unsigned int channels, unsigned int latnecy_ms);
    void close();
    void setPlaying(bool playing);
    int callback(jack_nframes_t nframes, void *arg);

    int sampleRate() const;
private:
    static void callback_bootstrap(void *);
    char* jack_client_name = nullptr;


    jack_port_t* jack_port_in = nullptr;
    jack_port_t* jack_port_out = nullptr;
    jack_client_t* jack_client_ptr = nullptr;
    jack_status_t* jack_status_ptr = nullptr;
    jack_nframes_t jack_buffer_size, jack_period_size;
    SoundThread jack_thread;
    int jack_samplerate;
    bool running;
    _jacksound_threading * jackthreading;
};

#endif //FAMITRACKER_QT_JACK_HPP
