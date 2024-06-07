QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        CPP/CPPClassUnit.cpp \
        CPP/CPPFactory.cpp \
        CPP/CPPMethodUnit.cpp \
        CPP/CPPPrintOperatorUnit.cpp \
        CodeGenerator.cpp \
        IClassUnit.cpp \
        ICodeFactory.cpp \
        IMethodBodyUnit.cpp \
        IMethodUnit.cpp \
        Unit.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    CPP/CPPClassUnit.h \
    CPP/CPPFactory.h \
    CPP/CPPMethodUnit.h \
    CPP/CPPPrintOperatorUnit.h \
    CodeGenerator.h \
    IClassUnit.h \
    ICodeFactory.h \
    IMethodBodyUnit.h \
    IMethodUnit.h \
    Unit.h
