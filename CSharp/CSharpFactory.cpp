#include "CSharpFactory.h"

string CSharpFactory::generateProgram()
{
    CSharpClassUnit myClass("MyClass");

    myClass.add(std::make_shared<CSharpMethodUnit>("testFunc1", "void", 0), CSharpClassUnit::PUBLIC);
    myClass.add(std::make_shared<CSharpMethodUnit>("testFunc2", "void", CSharpMethodUnit::STATIC), CSharpClassUnit::PRIVATE);
    myClass.add(std::make_shared<CSharpMethodUnit>("testFunc3", "void", CSharpMethodUnit::VIRTUAL), CSharpClassUnit::PUBLIC);

    auto method = std::make_shared<CSharpMethodUnit>("testFunc4", "void", CSharpMethodUnit::STATIC);
    method->add(std::make_shared<CSharpPrintOperatorUnit>(R"(Hello, world!)"));
    myClass.add(method, CSharpClassUnit::PROTECTED);

    return myClass.compile();
}
