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
    ../include/Common/Types/Types.h \
    ../include/Common/Types/CameraFeed.h \
    ../include/Common/Types/Account.h \
    ../include/Common/Interfaces/TcpRestServer.h \
    ../include/Common/Interfaces/TcpRestClient.h \
    ../include/Common/Interfaces/Messages/Types.h \
    ../include/Common/Interfaces/Messages/LoginMessage.h \
    ../include/Common/Interfaces/Messages/CameraMessage.h \
    ../include/Common/Interfaces/Messages/BaseMessage.h \
    ../include/Common/Interfaces/Utils/XmlHelpers.h

SOURCES += \
    ../src/Common/Types/CameraFeed.cpp \
    ../src/Common/Types/Account.cpp \
    ../src/Common/Interfaces/TcpRestServer.cpp \
    ../src/Common/Interfaces/TcpRestClient.cpp \
    ../src/Common/Interfaces/Messages/Types.cpp \
    ../src/Common/Interfaces/Messages/LoginMessage.cpp \
    ../src/Common/Interfaces/Messages/CameraMessage.cpp \
    ../src/Common/Interfaces/Messages/BaseMessage.cpp \
    ../src/Common/Interfaces/Utils/XmlHelpers.cpp
