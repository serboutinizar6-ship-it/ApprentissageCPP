TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        compteClient.cpp \
        compteEpargne.cpp \
        comptebancaire.cpp \
        main.cpp

HEADERS += \
    compteClient.h \
    compteEpargne.h \
    comptebancaire.h

DISTFILES += \
    compteBancaire.txt \
    compteClient.txt \
    compteEpargne.txt
