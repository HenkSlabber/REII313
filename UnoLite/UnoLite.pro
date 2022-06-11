QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    card.cpp \
    firstpage.cpp \
    halloffame.cpp \
    hostgamepage.cpp \
    lobbypage.cpp \
    main.cpp \
    multiplayerpage.cpp \
    popup.cpp \
    settings.cpp \
    singleplayerpage.cpp \
    unolite.cpp

HEADERS += \
    GlobalVariables.h \
    card.h \
    firstpage.h \
    halloffame.h \
    hostgamepage.h \
    lobbypage.h \
    multiplayerpage.h \
    popup.h \
    settings.h \
    singleplayerpage.h \
    unolite.h

FORMS += \
    firstpage.ui \
    halloffame.ui \
    hostgamepage.ui \
    lobbypage.ui \
    multiplayerpage.ui \
    popup.ui \
    settings.ui \
    singleplayerpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
