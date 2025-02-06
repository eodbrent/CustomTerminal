QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += "C:/Program Files (x86)/Windows Kits/10/Include/10.0.22621.0" \
INCLUDEPATH += "C:/Program Files (x86)/Windows Kits/10/Include/10.0.22621.0/um" \
               "C:/Program Files (x86)/Windows Kits/10/Include/10.0.22621.0/shared"

DEFINES += _WIN32_WINNT=0x0A00

LIBS += -lkernel32

SOURCES += \
    ConPTYManager.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ConPTYManager.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    CustomTerminal_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
