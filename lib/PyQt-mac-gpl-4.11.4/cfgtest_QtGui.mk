#############################################################################
# Makefile for building: cfgtest_QtGui.app/Contents/MacOS/cfgtest_QtGui
# Generated by qmake (2.01a) (Qt 4.8.7) on: So. Dez 11 11:22:15 2016
# Project:  cfgtest_QtGui.pro
# Template: app
# Command: /usr/local/Cellar/qt/4.8.7_2/bin/qmake -spec /usr/local/Cellar/qt/4.8.7_2/mkspecs/macx-g++ -o cfgtest_QtGui.mk cfgtest_QtGui.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -O2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
INCPATH       = -I/usr/local/Cellar/qt/4.8.7_2/mkspecs/macx-g++ -I. -I/usr/local/Cellar/qt/4.8.7_2/lib/QtCore.framework/Versions/4/Headers -I/usr/local/Cellar/qt/4.8.7_2/lib/QtCore.framework/Versions/4/Headers -I/usr/local/Cellar/qt/4.8.7_2/lib/QtGui.framework/Versions/4/Headers -I/usr/local/Cellar/qt/4.8.7_2/lib/QtGui.framework/Versions/4/Headers -I/usr/local/Cellar/qt/4.8.7_2/include -I. -F/usr/local/Cellar/qt/4.8.7_2/lib
LINK          = g++
LFLAGS        = -headerpad_max_install_names -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5
LIBS          = $(SUBLIBS) -F/usr/local/Cellar/qt/4.8.7_2/lib -L/usr/local/Cellar/qt/4.8.7_2/lib -framework QtGui -L/usr/local/opt/openssl/lib -L/usr/local/Cellar/qt/4.8.7_2/lib -F/usr/local/Cellar/qt/4.8.7_2/lib -framework QtCore 
AR            = ar cq
RANLIB        = ranlib -s
QMAKE         = /usr/local/Cellar/qt/4.8.7_2/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = 
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = $(COPY_FILE)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
export MACOSX_DEPLOYMENT_TARGET = 10.4

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = cfgtest_QtGui.cpp 
OBJECTS       = cfgtest_QtGui.o
DIST          = /usr/local/Cellar/qt/4.8.7_2/mkspecs/common/unix.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/mac.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/gcc-base.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/gcc-base-macx.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/g++-base.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/g++-macx.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/qconfig.pri \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt_functions.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt_config.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/exclusive_builds.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/default_pre.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/default_pre.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/release.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/default_post.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/default_post.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/x86_64.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/objective_c.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/shared.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/warn_on.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/unix/thread.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/moc.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/rez.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/sdk.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/resources.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/uic.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/yacc.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/lex.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/include_source_dir.prf \
		cfgtest_QtGui.pro
QMAKE_TARGET  = cfgtest_QtGui
DESTDIR       = 
TARGET        = cfgtest_QtGui.app/Contents/MacOS/cfgtest_QtGui

####### Custom Compiler Variables
QMAKE_COMP_QMAKE_OBJECTIVE_CFLAGS = -pipe \
		-O2 \
		-arch \
		x86_64 \
		-Xarch_x86_64 \
		-mmacosx-version-min=10.5 \
		-Wall \
		-W


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

all: cfgtest_QtGui.mk cfgtest_QtGui.app/Contents/PkgInfo cfgtest_QtGui.app/Contents/Resources/empty.lproj cfgtest_QtGui.app/Contents/Info.plist $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) cfgtest_QtGui.app/Contents/MacOS/ || $(MKDIR) cfgtest_QtGui.app/Contents/MacOS/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

cfgtest_QtGui.mk: cfgtest_QtGui.pro  /usr/local/Cellar/qt/4.8.7_2/mkspecs/macx-g++/qmake.conf /usr/local/Cellar/qt/4.8.7_2/mkspecs/common/unix.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/mac.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/gcc-base.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/gcc-base-macx.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/g++-base.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/g++-macx.conf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/qconfig.pri \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt_functions.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt_config.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/exclusive_builds.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/default_pre.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/default_pre.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/release.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/default_post.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/default_post.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/x86_64.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/objective_c.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/shared.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/warn_on.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/unix/thread.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/moc.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/rez.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/sdk.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/resources.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/uic.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/yacc.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/lex.prf \
		/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/include_source_dir.prf \
		/usr/local/Cellar/qt/4.8.7_2/lib/QtGui.framework/QtGui.prl \
		/usr/local/Cellar/qt/4.8.7_2/lib/QtCore.framework/QtCore.prl
	$(QMAKE) -spec /usr/local/Cellar/qt/4.8.7_2/mkspecs/macx-g++ -o cfgtest_QtGui.mk cfgtest_QtGui.pro
/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/unix.conf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/mac.conf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/gcc-base.conf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/gcc-base-macx.conf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/g++-base.conf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/common/g++-macx.conf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/qconfig.pri:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/modules/qt_webkit_version.pri:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt_functions.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt_config.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/exclusive_builds.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/default_pre.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/default_pre.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/release.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/default_post.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/default_post.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/x86_64.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/objective_c.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/shared.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/warn_on.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/qt.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/unix/thread.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/moc.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/rez.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/mac/sdk.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/resources.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/uic.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/yacc.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/lex.prf:
/usr/local/Cellar/qt/4.8.7_2/mkspecs/features/include_source_dir.prf:
/usr/local/Cellar/qt/4.8.7_2/lib/QtGui.framework/QtGui.prl:
/usr/local/Cellar/qt/4.8.7_2/lib/QtCore.framework/QtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/local/Cellar/qt/4.8.7_2/mkspecs/macx-g++ -o cfgtest_QtGui.mk cfgtest_QtGui.pro

cfgtest_QtGui.app/Contents/PkgInfo: 
	@$(CHK_DIR_EXISTS) cfgtest_QtGui.app/Contents || $(MKDIR) cfgtest_QtGui.app/Contents 
	@$(DEL_FILE) cfgtest_QtGui.app/Contents/PkgInfo
	@echo "APPL????" >cfgtest_QtGui.app/Contents/PkgInfo
cfgtest_QtGui.app/Contents/Resources/empty.lproj: 
	@$(CHK_DIR_EXISTS) cfgtest_QtGui.app/Contents/Resources || $(MKDIR) cfgtest_QtGui.app/Contents/Resources 
	@touch cfgtest_QtGui.app/Contents/Resources/empty.lproj
	
cfgtest_QtGui.app/Contents/Info.plist: 
	@$(CHK_DIR_EXISTS) cfgtest_QtGui.app/Contents || $(MKDIR) cfgtest_QtGui.app/Contents 
	@$(DEL_FILE) cfgtest_QtGui.app/Contents/Info.plist
	@sed -e "s,@SHORT_VERSION@,1.0,g" -e "s,@TYPEINFO@,????,g" -e "s,@ICON@,,g" -e "s,@EXECUTABLE@,cfgtest_QtGui,g" -e "s,@TYPEINFO@,????,g" /usr/local/Cellar/qt/4.8.7_2/mkspecs/macx-g++/Info.plist.app >cfgtest_QtGui.app/Contents/Info.plist
dist: 
	@$(CHK_DIR_EXISTS) .tmp/cfgtest_QtGui1.0.0 || $(MKDIR) .tmp/cfgtest_QtGui1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/cfgtest_QtGui1.0.0/ && $(COPY_FILE) --parents cfgtest_QtGui.cpp .tmp/cfgtest_QtGui1.0.0/ && (cd `dirname .tmp/cfgtest_QtGui1.0.0` && $(TAR) cfgtest_QtGui1.0.0.tar cfgtest_QtGui1.0.0 && $(COMPRESS) cfgtest_QtGui1.0.0.tar) && $(MOVE) `dirname .tmp/cfgtest_QtGui1.0.0`/cfgtest_QtGui1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/cfgtest_QtGui1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) -r cfgtest_QtGui.app
	-$(DEL_FILE) cfgtest_QtGui.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
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

cfgtest_QtGui.o: cfgtest_QtGui.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cfgtest_QtGui.o cfgtest_QtGui.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

