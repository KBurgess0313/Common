#############################################################################
# Makefile for building: libCommon.a
# Generated by qmake (2.01a) (Qt 4.8.6) on: Mon Mar 13 23:04:25 2017
# Project:  ../Common.pro
# Template: lib
# Command: /usr/lib/arm-linux-gnueabihf/qt4/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile ../Common.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -fPIC -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -std=c++11 -O2 -fPIC -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I../../build -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I../../include -I../../../Dependencies/unix/boost_1_63_0 -I../../../Dependencies/unix/opencv-2.4.13 -I../../../Dependencies/unix/casablanca/Release/include -I. -I../../build -I.
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/arm-linux-gnueabihf/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../../src/Common/Types/CameraFeed.cpp \
		../../src/Common/Types/Account.cpp \
		../../src/Common/Interfaces/TcpRestServer.cpp \
		../../src/Common/Interfaces/TcpRestClient.cpp \
		../../src/Common/Interfaces/Messages/Types.cpp \
		../../src/Common/Interfaces/Messages/LoginMessage.cpp \
		../../src/Common/Interfaces/Messages/CameraMessage.cpp \
		../../src/Common/Interfaces/Messages/BaseMessage.cpp \
		../../src/Common/Interfaces/Utils/XmlHelpers.cpp 
OBJECTS       = CameraFeed.o \
		Account.o \
		TcpRestServer.o \
		TcpRestClient.o \
		Types.o \
		LoginMessage.o \
		CameraMessage.o \
		BaseMessage.o \
		XmlHelpers.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/staticlib.prf \
		/usr/share/qt4/mkspecs/features/static.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		../Common.pro
QMAKE_TARGET  = Common
DESTDIR       = 
TARGET        = libCommon.a

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET) 

staticlib: $(TARGET)

$(TARGET):  $(OBJECTS) $(OBJCOMP) 
	-$(DEL_FILE) $(TARGET)
	$(AR) $(TARGET) $(OBJECTS)


Makefile: ../Common.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/staticlib.prf \
		/usr/share/qt4/mkspecs/features/static.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/arm-linux-gnueabihf/libQtGui.prl \
		/usr/lib/arm-linux-gnueabihf/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile ../Common.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/staticlib.prf:
/usr/share/qt4/mkspecs/features/static.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/arm-linux-gnueabihf/libQtGui.prl:
/usr/lib/arm-linux-gnueabihf/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile ../Common.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Common1.0.0 || $(MKDIR) .tmp/Common1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Common1.0.0/ && $(COPY_FILE) --parents ../../include/Common/Types/Types.h ../../include/Common/Types/CameraFeed.h ../../include/Common/Types/Account.h ../../include/Common/Interfaces/TcpRestServer.h ../../include/Common/Interfaces/TcpRestClient.h ../../include/Common/Interfaces/Messages/Types.h ../../include/Common/Interfaces/Messages/LoginMessage.h ../../include/Common/Interfaces/Messages/CameraMessage.h ../../include/Common/Interfaces/Messages/BaseMessage.h ../../include/Common/Interfaces/Utils/XmlHelpers.h .tmp/Common1.0.0/ && $(COPY_FILE) --parents ../../src/Common/Types/CameraFeed.cpp ../../src/Common/Types/Account.cpp ../../src/Common/Interfaces/TcpRestServer.cpp ../../src/Common/Interfaces/TcpRestClient.cpp ../../src/Common/Interfaces/Messages/Types.cpp ../../src/Common/Interfaces/Messages/LoginMessage.cpp ../../src/Common/Interfaces/Messages/CameraMessage.cpp ../../src/Common/Interfaces/Messages/BaseMessage.cpp ../../src/Common/Interfaces/Utils/XmlHelpers.cpp .tmp/Common1.0.0/ && (cd `dirname .tmp/Common1.0.0` && $(TAR) Common1.0.0.tar Common1.0.0 && $(COMPRESS) Common1.0.0.tar) && $(MOVE) `dirname .tmp/Common1.0.0`/Common1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Common1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

CameraFeed.o: ../../src/Common/Types/CameraFeed.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CameraFeed.o ../../src/Common/Types/CameraFeed.cpp

Account.o: ../../src/Common/Types/Account.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Account.o ../../src/Common/Types/Account.cpp

TcpRestServer.o: ../../src/Common/Interfaces/TcpRestServer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TcpRestServer.o ../../src/Common/Interfaces/TcpRestServer.cpp

TcpRestClient.o: ../../src/Common/Interfaces/TcpRestClient.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TcpRestClient.o ../../src/Common/Interfaces/TcpRestClient.cpp

Types.o: ../../src/Common/Interfaces/Messages/Types.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Types.o ../../src/Common/Interfaces/Messages/Types.cpp

LoginMessage.o: ../../src/Common/Interfaces/Messages/LoginMessage.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LoginMessage.o ../../src/Common/Interfaces/Messages/LoginMessage.cpp

CameraMessage.o: ../../src/Common/Interfaces/Messages/CameraMessage.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CameraMessage.o ../../src/Common/Interfaces/Messages/CameraMessage.cpp

BaseMessage.o: ../../src/Common/Interfaces/Messages/BaseMessage.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BaseMessage.o ../../src/Common/Interfaces/Messages/BaseMessage.cpp

XmlHelpers.o: ../../src/Common/Interfaces/Utils/XmlHelpers.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o XmlHelpers.o ../../src/Common/Interfaces/Utils/XmlHelpers.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
