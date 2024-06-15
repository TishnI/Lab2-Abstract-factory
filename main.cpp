#include <QCoreApplication>
#include <iostream>

#include "CPP/CPPFactory.h"
#include "CSharp/CSharpFactory.h"
#include "Java/JavaFactory.h"


string generateProgram(shared_ptr<ICodeFactory>& factory)
{
    if(factory == nullptr)
    {
        qWarning("Factory not initialized");
        return "";
    }

    auto myClass = factory->createClass("MyClass");

    if(myClass != nullptr)
    {
        myClass->add(factory->createMethod("testFunc1", "void", 0), AbstractClassUnit::PUBLIC);
        myClass->add(factory->createMethod("testFunc2", "void", AbstractMethodUnit::STATIC), AbstractClassUnit::PRIVATE);
        myClass->add(factory->createMethod("testFunc3", "void", AbstractMethodUnit::VIRTUAL | AbstractMethodUnit::CONST), AbstractClassUnit::PUBLIC);
        shared_ptr<AbstractMethodUnit> method = factory->createMethod("testFunc4", "void", AbstractMethodUnit::STATIC);
        method->add(factory->createMethodBody(R"(Hello, world!\n)"));
        myClass->add(method, AbstractClassUnit::PROTECTED);

        myClass->add(factory->createMethod("testFunc5", "void", AbstractMethodUnit::FINAL), AbstractClassUnit::PUBLIC);

        return myClass->compile();
    }

    return "";
}


int main(int argc, char *argv[])
{
    shared_ptr<ICodeFactory> cppFactory = make_shared<CPPFactory>();
    shared_ptr<ICodeFactory> csharpFactory = make_shared<CSharpFactory>();
    shared_ptr<ICodeFactory> javaFactory = make_shared<JavaFactory>();

    std::cout<<generateProgram(cppFactory)<<std::endl;
    std::cout<<generateProgram(csharpFactory)<<std::endl;
    std::cout<<generateProgram(javaFactory)<<std::endl;

    return 0;
}






