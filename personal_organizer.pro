QT += core gui sql
QT += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    acedamic.cpp \
    budget.cpp \
    databasemanager.cpp \
    deadline.cpp \
    expense.cpp \
    income.cpp \
    main.cpp \
    mainwindow.cpp \
    register.cpp \
    report.cpp \
    secwindow.cpp

HEADERS += \
    acedamic.h \
    budget.h \
    databasemanager.h \
    deadline.h \
    expense.h \
    income.h \
    mainwindow.h \
    register.h \
    report.h \
    secwindow.h

FORMS += \
    acedamic.ui \
    budget.ui \
    deadline.ui \
    expense.ui \
    income.ui \
    mainwindow.ui \
    register.ui \
    report.ui \
    secwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
