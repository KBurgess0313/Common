#-------------------------------------------------
#
# Project created by QtCreator 2017-03-11T23:43:30
#
#-------------------------------------------------

QT       += widgets

QMAKE_CXXFLAGS += -std=c++11

TARGET = Common
TEMPLATE = lib
CONFIG += staticlib

DEPENDENCIES_HOME = ../../Dependencies/
DEPENDENCIES_HOME = /home/pi/Developer/Dependencies/unix
BOOST_HOME = $DEPENDENCIES_HOME/boost_1_63_0
OPENCV_HOME = $DEPENDENCIES_HOME/opencv-2.4.13
CPPREST_HOME = $DEPENDENCIES_HOME/casablanca

INCLUDEPATH += ../../include/ \
               $BOOST_HOME/ \
               $OPENCV_HOME/ \
               $CPPREST_HOME/Release/include \
SOURCES += \
    ../src/Common/Types/CameraFeed.cpp \
    ../src/Common/Types/Account.cpp \
    ../src/Common/Interfaces/TcpRestServer.cpp \
    ../src/Common/Interfaces/TcpRestClient.cpp \
    ../src/Common/Interfaces/Messages/LoginMessage.cpp \
    ../src/Common/Interfaces/Messages/BaseMessage.cpp

HEADERS += \
    ../include/Common/Types/Types.h \
    ../include/Common/Types/CameraFeed.h \
    ../include/Common/Types/Account.h \
    ../include/Common/Interfaces/TcpRestServer.h \
    ../include/Common/Interfaces/TcpRestClient.h \
    ../include/Common/Interfaces/Messages/Types.h \
    ../include/Common/Interfaces/Messages/LoginMessage.h \
    ../include/Common/Interfaces/Messages/BaseMessage.h
