TEMPLATE = subdirs
CONFIG += ordered nostrip
SUBDIRS = QtCore QtGui QtHelp QtMultimedia QtNetwork QtDeclarative QtScript QtScriptTools QtXml QtOpenGL QtSql QtSvg QtTest QtWebKit QtXmlPatterns phonon QtDesigner Qt pylupdate pyrcc designer

init_py.files = /Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/__init__.py
init_py.path = /Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/PyQt4
INSTALLS += init_py

uic_package.files = /Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/pyuic/uic
uic_package.path = /Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/PyQt4
INSTALLS += uic_package

pyuic4.files = pyuic4
pyuic4.path = /Library/Frameworks/Python.framework/Versions/2.7/bin
INSTALLS += pyuic4
