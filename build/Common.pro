#-------------------------------------------------
#
# Project created by QtCreator 2017-03-11T23:43:30
#
#-------------------------------------------------
QMAKE_CXXFLAGS += -std=c++11

TEMPLATE = lib
CONFIG += staticlib

CONFIG(debug, debug | release) {
  TARGET = Commond
}
CONFIG(release, debug | release) {
  TARGET = Common
}

INCLUDEPATH += ../include/ \
               ../../Dependencies/unix/boost_1_63_0 \
               ../../Dependencies/unix/opencv-2.4.13 \
               ../../Dependencies/unix/casablanca/Release/include

HEADERS += \
    ../include/Common/pod/Camera.h \
    ../include/Common/pod/Account.h \
    ../include/Common/Network/RestClient.h \
    ../include/Common/Network/Message/MessageTypes.h \
    ../include/Common/Network/Message/LoginMessage.h \
    ../include/Common/Network/Message/CameraMessage.h \
    ../include/Common/Network/Message/BaseMessage.h \
    ../include/Common/Network/Utils/XmlHelpers.h \
    ../include/Common/Network/RestServer.h

SOURCES += \
    ../src/Common/pod/Camera.cpp \
    ../src/Common/pod/Account.cpp \
    ../src/Common/Network/RestServer.cpp \
    ../src/Common/Network/RestClient.cpp \
    ../src/Common/Network/Message/MessageTypes.cpp \
    ../src/Common/Network/Message/LoginMessage.cpp \
    ../src/Common/Network/Message/CameraMessage.cpp \
    ../src/Common/Network/Message/BaseMessage.cpp \
    ../src/Common/Network/Utils/XmlHelpers.cpp
