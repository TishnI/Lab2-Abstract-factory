#include <QCoreApplication>
#include <iostream>

#include "CPP/CPPFactory.h"
#include "CSharp/CSharpFactory.h"
#include "Java/JavaFactory.h"

/*string generateProgram()
{
    ClassUnit myClass("MyClass");

    myClass.add(std::make_shared<MethodUnit>("testFunc1", "void", 0), ClassUnit::PUBLIC);
    myClass.add(std::make_shared<MethodUnit>("testFunc2", "void", MethodUnit::STATIC), ClassUnit::PRIVATE);
    myClass.add(std::make_shared<MethodUnit>("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST), ClassUnit::PUBLIC);

    auto method = std::make_shared<MethodUnit>("testFunc4", "void", MethodUnit::STATIC);
    method->add(std::make_shared<PrintOperatorUnit>(R"(Hello, world!\n)"));
    myClass.add(method, ClassUnit::PROTECTED);

    return myClass.compile();
}*/
string generateProgram(shared_ptr<ICodeFactory>& factory)
{
    auto myClass = factory->createClass("MyClass");

    if(myClass != nullptr)
    {
        myClass->add(factory->createMethod("testFunc1", "void", 0), AbstractClassUnit::PUBLIC);
        myClass->add(factory->createMethod("testFunc2", "void", AbstractMethodUnit::STATIC), AbstractClassUnit::PRIVATE);
        myClass->add(factory->createMethod("testFunc3", "void", AbstractMethodUnit::VIRTUAL | AbstractMethodUnit::CONST), AbstractClassUnit::PUBLIC);
        shared_ptr<AbstractMethodUnit> method = factory->createMethod("testFunc4", "void", AbstractMethodUnit::STATIC);
        method->add(factory->createMethodBody(R"(Hello, world!\n)"));
        myClass->add(method, AbstractClassUnit::PROTECTED);

        myClass->add(factory->createMethod("testFunc5", "void", AbstractMethodUnit::ABSTRACT | AbstractMethodUnit::FINAL), AbstractClassUnit::PRIVATE);

        return myClass->compile();
    }

    return "";
}

int main()
{

    shared_ptr<ICodeFactory> cppFactory = make_shared<CPPFactory>();
    shared_ptr<ICodeFactory> csharpFactory = make_shared<CSharpFactory>();
    shared_ptr<ICodeFactory> javaFactory = make_shared<JavaFactory>();

    std::cout<<generateProgram(javaFactory)<<std::endl;

    return 0;
}






