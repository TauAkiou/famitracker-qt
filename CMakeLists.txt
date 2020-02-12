cmake_minimum_required(VERSION 3.15)
project(famitracker_qt)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)


find_package(Qt5 COMPONENTS Gui REQUIRED Core REQUIRED Widgets REQUIRED)
FIND_PACKAGE(JACK COMPONENTS REQUIRED)
find_package(ALSA)
find_package(Boost REQUIRED thread)

include_directories(build)
include_directories(src)
include_directories(src/core)
include_directories(src/core/common)
include_directories(src/famitracker-core)
include_directories(src/famitracker-core/APU)
include_directories(src/famitracker-core/APU/Blip_Buffer)
include_directories(src/famitracker-core/drivers)
include_directories(src/qt-gui)
include_directories(src/qt-gui/pixelfonts)
include_directories(src/qt-gui/pixelfonts/vincent)
include_directories(src/sound)



add_executable(famitracker_qt
        src/core/common/libraries.hpp
        src/core/common/platform.hpp
        src/core/common.hpp
        src/core/io.cpp
        src/core/io.hpp
        src/core/ringbuffer.hpp
        src/core/soundsink.cpp
        src/core/soundsink.hpp
        src/core/threadpool.cpp
        src/core/threadpool.hpp
        src/core/time.hpp
        src/core/types.hpp
        src/famitracker-core/APU/Blip_Buffer/Blip_Buffer.cpp
        src/famitracker-core/APU/Blip_Buffer/Blip_Buffer.h
        src/famitracker-core/APU/2413tone.h
        src/famitracker-core/APU/APU.cpp
        src/famitracker-core/APU/APU.h
        src/famitracker-core/APU/Channel.h
        src/famitracker-core/APU/DPCM.cpp
        src/famitracker-core/APU/DPCM.h
        src/famitracker-core/APU/emu2413.c
        src/famitracker-core/APU/emu2413.h
        src/famitracker-core/APU/External.h
        src/famitracker-core/APU/FDS.cpp
        src/famitracker-core/APU/FDS.h
        src/famitracker-core/APU/FDSSound.cpp
        src/famitracker-core/APU/FDSSound.h
        src/famitracker-core/APU/Mixer.cpp
        src/famitracker-core/APU/Mixer.h
        src/famitracker-core/APU/MMC5.cpp
        src/famitracker-core/APU/MMC5.h
        src/famitracker-core/APU/N106.cpp
        src/famitracker-core/APU/N106.h
        src/famitracker-core/APU/Noise.cpp
        src/famitracker-core/APU/Noise.h
        src/famitracker-core/APU/S5B.cpp
        src/famitracker-core/APU/S5B.h
        src/famitracker-core/APU/Square.cpp
        src/famitracker-core/APU/Square.h
        src/famitracker-core/APU/Triangle.cpp
        src/famitracker-core/APU/Triangle.h
        src/famitracker-core/APU/VRC6.cpp
        src/famitracker-core/APU/VRC6.h
        src/famitracker-core/APU/VRC7.cpp
        src/famitracker-core/APU/VRC7.h
        src/famitracker-core/APU/vrc7tone.h
        src/famitracker-core/drivers/drv_2a03.h
        src/famitracker-core/drivers/drv_fds.h
        src/famitracker-core/drivers/drv_mmc5.h
        src/famitracker-core/drivers/drv_mode1.h
        src/famitracker-core/drivers/drv_mode2.h
        src/famitracker-core/drivers/drv_n163.h
        src/famitracker-core/drivers/drv_vrc6.h
        src/famitracker-core/drivers/drv_vrc7.h
        src/famitracker-core/App.cpp
        src/famitracker-core/App.hpp
        src/famitracker-core/ChannelHandler.cpp
        src/famitracker-core/ChannelHandler.h
        src/famitracker-core/ChannelMap.cpp
        src/famitracker-core/ChannelMap.h
        src/famitracker-core/Channels2A03.cpp
        src/famitracker-core/Channels2A03.h
        src/famitracker-core/ChannelsFDS.cpp
        src/famitracker-core/ChannelsFDS.h
        src/famitracker-core/ChannelsMMC5.cpp
        src/famitracker-core/ChannelsMMC5.h
        src/famitracker-core/ChannelsVRC6.cpp
        src/famitracker-core/ChannelsVRC6.h
        src/famitracker-core/ChannelsVRC7.cpp
        src/famitracker-core/ChannelsVRC7.h
        src/famitracker-core/Common.h
        src/famitracker-core/common.hpp
        src/famitracker-core/CustomExporterInterfaces.h
        src/famitracker-core/Document.cpp
        src/famitracker-core/Document.hpp
        src/famitracker-core/exceptions.cpp
        src/famitracker-core/exceptions.hpp
        src/famitracker-core/FamiTrackerTypes.h
        src/famitracker-core/FSettings.cpp
        src/famitracker-core/FtmDocument.cpp
        src/famitracker-core/FtmDocument.hpp
        src/famitracker-core/Instrument.cpp
        src/famitracker-core/Instrument.h
        src/famitracker-core/Instrument2A03.cpp
        src/famitracker-core/InstrumentFDS.cpp
        src/famitracker-core/InstrumentVRC6.cpp
        src/famitracker-core/InstrumentVRC7.cpp
        src/famitracker-core/PatternData.cpp
        src/famitracker-core/PatternData.h
        src/famitracker-core/Sequence.cpp
        src/famitracker-core/Sequence.h
        src/famitracker-core/SoundGen.cpp
        src/famitracker-core/SoundGen.hpp
        src/famitracker-core/TrackerChannel.cpp
        src/famitracker-core/TrackerChannel.h
        src/famitracker-core/TrackerController.cpp
        src/famitracker-core/TrackerController.hpp
        src/famitracker-core/types.hpp
        src/famitracker-core/wavoutput.cpp
        src/famitracker-core/wavoutput.hpp
        src/qt-gui/pixelfonts/vincent/vincent.h
        src/qt-gui/AboutDialog.cpp
        src/qt-gui/AboutDialog.hpp
        src/qt-gui/CreateWAV.cpp
        src/qt-gui/CreateWAV.hpp
        src/qt-gui/DocInfo.cpp
        src/qt-gui/DocInfo.hpp
        src/qt-gui/FrameView.cpp
        src/qt-gui/FrameView.hpp
        src/qt-gui/GUI.cpp
        src/qt-gui/GUI.hpp
        src/qt-gui/GUI_App.cpp
        src/qt-gui/GUI_App.hpp
        src/qt-gui/GUI_ThreadPool.cpp
        src/qt-gui/GUI_ThreadPool.hpp
        src/qt-gui/InstrumentEditor.cpp
        src/qt-gui/InstrumentEditor.hpp
        src/qt-gui/InstrumentEditorTypes.cpp
        src/qt-gui/InstrumentEditorTypes.hpp
        src/qt-gui/main.cpp
        src/qt-gui/MainWindow.cpp
        src/qt-gui/MainWindow.hpp
        src/qt-gui/ModuleProperties.cpp
        src/qt-gui/ModuleProperties.hpp
        src/qt-gui/PatternView.cpp
        src/qt-gui/PatternView.hpp
        src/qt-gui/RowPages.cpp
        src/qt-gui/RowPages.hpp
        src/qt-gui/SequenceEditor.cpp
        src/qt-gui/SequenceEditor.hpp
        src/qt-gui/Settings.cpp
        src/qt-gui/Settings.hpp
        src/qt-gui/styles.cpp
        src/qt-gui/styles.hpp
        src/sound/alsa.cpp
        src/sound/alsa.hpp
        src/sound/soundthread.cpp
        src/sound/soundthread.hpp
        src/defaults.hpp
        src/emu2149.c
        src/emu2149.h
        src/parse_arguments.cpp
        src/parse_arguments.hpp
        src/version.hpp
        src/sound/jack.cpp
        src/sound/jack.hpp)
target_link_libraries(famitracker_qt Qt5::Widgets Qt5::Gui Qt5::Core ${JACK_LIBRARY} ${ALSA_LIBRARIES} ${Boost_LIBRARIES})