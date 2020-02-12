#-------------------------------------------------
#
# Project created by QtCreator 2017-12-04T19:59:58
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = famitracker
TEMPLATE = app

LIBS += -L/etc/ -lboost_system -lboost_thread -lasound

QMAKE_CXXFLAGS_DEBUG -= -O2 -O3 -O1
QMAKE_CXXFLAGS_DEBUG += -O0

SOURCES += \
    core/io.cpp \
    core/soundsink.cpp \
    core/threadpool.cpp \
    famitracker-core/APU/Blip_Buffer/Blip_Buffer.cpp \
    famitracker-core/APU/APU.cpp \
    famitracker-core/APU/DPCM.cpp \
    famitracker-core/APU/emu2413.c \
    famitracker-core/APU/FDS.cpp \
    famitracker-core/APU/FDSSound.cpp \
    famitracker-core/APU/Mixer.cpp \
    famitracker-core/APU/MMC5.cpp \
    famitracker-core/APU/N106.cpp \
    famitracker-core/APU/Noise.cpp \
    famitracker-core/APU/S5B.cpp \
    famitracker-core/APU/Square.cpp \
    famitracker-core/APU/Triangle.cpp \
    famitracker-core/APU/VRC6.cpp \
    famitracker-core/APU/VRC7.cpp \
    famitracker-core/App.cpp \
    famitracker-core/ChannelHandler.cpp \
    famitracker-core/ChannelMap.cpp \
    famitracker-core/Channels2A03.cpp \
    famitracker-core/ChannelsFDS.cpp \
    famitracker-core/ChannelsMMC5.cpp \
    famitracker-core/ChannelsVRC6.cpp \
    famitracker-core/ChannelsVRC7.cpp \
    famitracker-core/Document.cpp \
    famitracker-core/exceptions.cpp \
    famitracker-core/FSettings.cpp \
    famitracker-core/FtmDocument.cpp \
    famitracker-core/Instrument.cpp \
    famitracker-core/Instrument2A03.cpp \
    famitracker-core/InstrumentFDS.cpp \
    famitracker-core/InstrumentVRC6.cpp \
    famitracker-core/InstrumentVRC7.cpp \
    famitracker-core/PatternData.cpp \
    famitracker-core/Sequence.cpp \
    famitracker-core/SoundGen.cpp \
    famitracker-core/TrackerChannel.cpp \
    famitracker-core/TrackerController.cpp \
    famitracker-core/wavoutput.cpp \
    qt-gui/AboutDialog.cpp \
    qt-gui/CreateWAV.cpp \
    qt-gui/DocInfo.cpp \
    qt-gui/FrameView.cpp \
    qt-gui/GUI.cpp \
    qt-gui/GUI_App.cpp \
    qt-gui/GUI_ThreadPool.cpp \
    qt-gui/InstrumentEditor.cpp \
    qt-gui/InstrumentEditorTypes.cpp \
    qt-gui/main.cpp \
    qt-gui/MainWindow.cpp \
    qt-gui/ModuleProperties.cpp \
    qt-gui/PatternView.cpp \
    qt-gui/RowPages.cpp \
    qt-gui/SequenceEditor.cpp \
    qt-gui/Settings.cpp \
    qt-gui/styles.cpp \
    sound/alsa.cpp \
    sound/soundthread.cpp \
    parse_arguments.cpp \
    emu2149.c

HEADERS += \
    core/common/libraries.hpp \
    core/common/platform.hpp \
    core/common.hpp \
    core/io.hpp \
    core/ringbuffer.hpp \
    core/soundsink.hpp \
    core/threadpool.hpp \
    core/time.hpp \
    core/types.hpp \
    famitracker-core/APU/Blip_Buffer/Blip_Buffer.h \
    famitracker-core/APU/2413tone.h \
    famitracker-core/APU/APU.h \
    famitracker-core/APU/Channel.h \
    famitracker-core/APU/DPCM.h \
    famitracker-core/APU/emu2413.h \
    famitracker-core/APU/External.h \
    famitracker-core/APU/FDS.h \
    famitracker-core/APU/FDSSound.h \
    famitracker-core/APU/Mixer.h \
    famitracker-core/APU/MMC5.h \
    famitracker-core/APU/N106.h \
    famitracker-core/APU/Noise.h \
    famitracker-core/APU/S5B.h \
    famitracker-core/APU/Square.h \
    famitracker-core/APU/Triangle.h \
    famitracker-core/APU/VRC6.h \
    famitracker-core/APU/VRC7.h \
    famitracker-core/APU/vrc7tone.h \
    famitracker-core/drivers/drv_2a03.h \
    famitracker-core/drivers/drv_fds.h \
    famitracker-core/drivers/drv_mmc5.h \
    famitracker-core/drivers/drv_mode1.h \
    famitracker-core/drivers/drv_mode2.h \
    famitracker-core/drivers/drv_n163.h \
    famitracker-core/drivers/drv_vrc6.h \
    famitracker-core/drivers/drv_vrc7.h \
    famitracker-core/App.hpp \
    famitracker-core/ChannelHandler.h \
    famitracker-core/ChannelMap.h \
    famitracker-core/Channels2A03.h \
    famitracker-core/ChannelsFDS.h \
    famitracker-core/ChannelsMMC5.h \
    famitracker-core/ChannelsVRC6.h \
    famitracker-core/ChannelsVRC7.h \
    famitracker-core/Common.h \
    famitracker-core/common.hpp \
    famitracker-core/CustomExporterInterfaces.h \
    famitracker-core/Document.hpp \
    famitracker-core/exceptions.hpp \
    famitracker-core/FamiTrackerTypes.h \
    famitracker-core/FtmDocument.hpp \
    famitracker-core/Instrument.h \
    famitracker-core/PatternData.h \
    famitracker-core/Sequence.h \
    famitracker-core/Settings.h \
    famitracker-core/SoundGen.hpp \
    famitracker-core/TrackerChannel.h \
    famitracker-core/TrackerController.hpp \
    famitracker-core/types.hpp \
    famitracker-core/wavoutput.hpp \
    qt-gui/pixelfonts/vincent/vincent.h \
    qt-gui/AboutDialog.hpp \
    qt-gui/CreateWAV.hpp \
    qt-gui/DocInfo.hpp \
    qt-gui/FrameView.hpp \
    qt-gui/GUI.hpp \
    qt-gui/GUI_App.hpp \
    qt-gui/GUI_ThreadPool.hpp \
    qt-gui/InstrumentEditor.hpp \
    qt-gui/InstrumentEditorTypes.hpp \
    qt-gui/MainWindow.hpp \
    qt-gui/ModuleProperties.hpp \
    qt-gui/PatternView.hpp \
    qt-gui/RowPages.hpp \
    qt-gui/SequenceEditor.hpp \
    qt-gui/Settings.hpp \
    qt-gui/styles.hpp \
    sound/alsa.hpp \
    sound/soundthread.hpp \
    defaults.hpp \
    parse_arguments.hpp \
    version.hpp \
    emu2149.h

FORMS += \
    qt-gui/about.ui \
    qt-gui/createwav.ui \
    qt-gui/mainwindow.ui \
    qt-gui/moduleproperties.ui

RESOURCES += \
    qt-gui/resources.qrc
