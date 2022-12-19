QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    macro_defs.h \
    mainwindow.h \
    structs_enums.h

INCLUDEPATH += \
libavcodec/
libavformat/
libswscale/

LIBS += \
-lavcodec
-lavformat
-lswsscale

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
	img.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lavcodec
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lavcodec
else:unix: LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lavcodec

INCLUDEPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include
DEPENDPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lavformat
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lavformat
else:unix: LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lavformat

INCLUDEPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include
DEPENDPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include

unix|win32: LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lswscale

INCLUDEPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include
DEPENDPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lSDL2
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lSDL2
else:unix: LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lSDL2

INCLUDEPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include
DEPENDPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include

unix|win32: LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lswresample

INCLUDEPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include
DEPENDPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include

unix|win32: LIBS += -L$$PWD/../../../Qt/5.15.2/mingw81_32/lib/ -lavutil

INCLUDEPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include/
DEPENDPATH += $$PWD/../../../Qt/5.15.2/mingw81_32/include/
