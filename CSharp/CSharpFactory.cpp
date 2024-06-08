#include "CSharpFactory.h"

/*string CSharpFactory::generateProgram()
{
    CSharpClassUnit myClass("MyClass");

    myClass.add(std::make_shared<CSharpMethodUnit>("testFunc1", "void", 0), CSharpClassUnit::PUBLIC);
    myClass.add(std::make_shared<CSharpMethodUnit>("testFunc2", "void", CSharpMethodUnit::STATIC), CSharpClassUnit::PRIVATE);
    myClass.add(std::make_shared<CSharpMethodUnit>("testFunc3", "void", CSharpMethodUnit::VIRTUAL), CSharpClassUnit::PUBLIC);

    auto method = std::make_shared<CSharpMethodUnit>("testFunc4", "void", CSharpMethodUnit::STATIC);
    method->add(std::make_shared<CSharpPrintOperatorUnit>(R"(Hello, world!)"));
    myClass.add(method, CSharpClassUnit::PROTECTED);

    return myClass.compile();
}*/

shared_ptr<AbstractClassUnit> CSharpFactory::createClass(const string &name)
{
    return make_shared<CSharpClassUnit>(name);
}

shared_ptr<AbstractMethodUnit> CSharpFactory::createMethod(const string &name, const string &returnType, Flags flags)
{
    return make_shared<CSharpMethodUnit>(name, returnType, flags);
}

shared_ptr<AbstractMethodBodyUnit> CSharpFactory::createMethodBody(const string &text)
{
    return make_shared<CSharpPrintOperatorUnit>(text);
}
