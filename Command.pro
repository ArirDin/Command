QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
    command.cpp \
    garagedoor.cpp \
    light.cpp \
    lightoncommand.cpp \
    lightoffcommand.cpp \
    garagedoordowncommand.cpp \
    garagedoorupcommand.cpp \
    hottub.cpp \
    hottuboffcommand.cpp \
    hottuboncommand.cpp \
    remotecontrol.cpp \
    nocommand.cpp \
    ceilingfan.cpp \
    ceilingfanoffcommand.cpp \
    ceilingfanoncommand.cpp \
    stereo.cpp \
    stereooffcommand.cpp \
    stereoonwithcdcommand.cpp \
    fireplace.cpp \
    fireplaceoffcommand.cpp \
    fireplaceoncommand.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    command.h \
    garagedoor.h \
    light.h \
    lightoncommand.h \
    lightoffcommand.h \
    garagedoordowncommand.h \
    garagedoorupcommand.h \
    hottub.h \
    hottuboffcommand.h \
    hottuboncommand.h \
    remotecontrol.h \
    nocommand.h \
    ceilingfan.h \
    ceilingfanoffcommand.h \
    ceilingfanoncommand.h \
    stereo.h \
    stereooffcommand.h \
    stereoonwithcdcommand.h \
    fireplace.h \
    fireplaceoffcommand.h \
    fireplaceoncommand.h
