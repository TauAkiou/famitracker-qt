# FamiTracker-EX Qt

This project is fork of Famitracker Qt written by prichman, which was a fork of FamiTracker CX written by Dan Spencer (nukep).

## What is FamiTracker Qt?
FamiTracker Qt is a free cross-platform Qt fork of FamiTracker for Linux.

FamiTracker Qt is created in order to bring the popular NES/Famicom music
tracker to Linux.

ALSA is the one supported audio API.

The software license is mixed GPL v2/New BSD (inherited from FamiTracker CX).

![Screenshot 1](img/screenshot1.png)
![Screenshot 2](img/screenshot2.png)

## What is Famitracker-EX Qt?

FamiTracker-EX Qt is an expanded version of Famitracker Qt that is primarily designed to add support
for additional audio backends, such as JACK.

The primary changes made to the original project are currently expected to be:
* Move compilation from QMake to CMake.
* Support for JACK.

## Attention
FamiTracker Qt is not the main project I maintain. The code may contain errors. That's ok :)

## TODO
- [ ] Remove boost thread dependency 
- [ ] Fix crashes
- [ ] Write wav converter

## How to build
FamiTracker Qt depends on following libraries:
 * Qt5
 * libalsa-devel
 * boost-system
 * boost-thread

You can build boost libraries with for example [this](https://github.com/jslick/matrixvm/wiki/How-to-build-boost-thread-(on-Linux)) guide.

Once you resolve dependencies move to src folder and edit variable **BOOST_DIR** in *famitracker-qt.pro*.
Finally go to the project folder and type in the terminal the next commands:
```
mkdir build
cd build
qmake ../src/famitracker-qt.pro
make
```
