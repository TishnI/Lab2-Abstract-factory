QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        AbstractClassUnit.cpp \
        AbstractMethodBodyUnit.cpp \
        AbstractMethodUnit.cpp \
        CSharp/CSharpClassUnit.cpp \
        CPP/CPPClassUnit.cpp \
        CPP/CPPFactory.cpp \
        CPP/CPPMethodUnit.cpp \
        CPP/CPPPrintOperatorUnit.cpp \
        CSharp/CSharpFactory.cpp \
        CSharp/CSharpMethodUnit.cpp \
        CSharp/CSharpPrintOperatorUnit.cpp \
        ICodeFactory.cpp \
        Java/JavaClassUnit.cpp \
        Java/JavaFactory.cpp \
        Java/JavaMethodUnit.cpp \
        Java/JavaPrintOperatorUnit.cpp \
        Unit.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    AbstractClassUnit.h \
    AbstractMethodBodyUnit.h \
    AbstractMethodUnit.h \
    CSharp/CSharpClassUnit.h \
    CPP/CPPClassUnit.h \
    CPP/CPPFactory.h \
    CPP/CPPMethodUnit.h \
    CPP/CPPPrintOperatorUnit.h \
    CSharp/CSharpFactory.h \
    CSharp/CSharpMethodUnit.h \
    CSharp/CSharpPrintOperatorUnit.h \
    ICodeFactory.h \
    Java/JavaClassUnit.h \
    Java/JavaFactory.h \
    Java/JavaMethodUnit.h \
    Java/JavaPrintOperatorUnit.h \
    Unit.h
