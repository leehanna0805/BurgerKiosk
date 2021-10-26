QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    buy.cpp \
    chef_burger.cpp \
    ingredient.cpp \
    main.cpp \
    mainwindow.cpp \
    money_pop.cpp \
    money_push.cpp \
    msgdialog.cpp \
    my_burger.cpp \
    password.cpp \
    payment.cpp

HEADERS += \
    admin.h \
    buy.h \
    chef_burger.h \
    ingredient.h \
    mainwindow.h \
    money_pop.h \
    money_push.h \
    msgdialog.h \
    my_burger.h \
    password.h \
    payment.h

FORMS += \
    admin.ui \
    chef_burger.ui \
    mainwindow.ui \
    money_pop.ui \
    money_push.ui \
    msgdialog.ui \
    my_burger.ui \
    password.ui \
    payment.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES +=
