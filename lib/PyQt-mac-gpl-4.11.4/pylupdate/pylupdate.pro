TARGET = pylupdate4
TEMPLATE = app
QT -= gui
QT += xml
CONFIG += warn_on release
CONFIG -= app_bundle
CONFIG -= android_install
target.path = /Library/Frameworks/Python.framework/Versions/2.7/bin
INSTALLS += target
INCLUDEPATH += /Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/pylupdate
VPATH = /Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/pylupdate
HEADERS = metatranslator.h proparser.h simtexth.h translator.h
SOURCES = fetchtr.cpp main.cpp merge.cpp metatranslator.cpp numberh.cpp proparser.cpp sametexth.cpp simtexth.cpp translator.cpp