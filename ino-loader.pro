TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    motor-control.cpp \
    module-interface.cpp \
    pinout-control.cpp \
    lcd-screen.cpp \
    module-manager.cpp

HEADERS += \
    motor-control.h \
    module-interface.h \
    pinout-control.h \
    lcd-screen.h \
    module-manager.h
