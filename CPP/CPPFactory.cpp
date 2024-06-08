#include "CPPFactory.h"


/*string CPPFactory::generateProgram()
{
    CPPClassUnit myClass("MyClass");

    myClass.add(std::make_shared<CPPMethodUnit>("testFunc1", "void", 0), CPPClassUnit::PUBLIC);
    myClass.add(std::make_shared<CPPMethodUnit>("testFunc2", "void", CPPMethodUnit::STATIC), CPPClassUnit::PRIVATE);
    myClass.add(std::make_shared<CPPMethodUnit>("testFunc3", "void", CPPMethodUnit::VIRTUAL | CPPMethodUnit::CONST), CPPClassUnit::PUBLIC);

    auto method = std::make_shared<CPPMethodUnit>("testFunc4", "void", CPPMethodUnit::STATIC);
    method->add(std::make_shared<CPPPrintOperatorUnit>(R"(Hello, world!\n)"));
    myClass.add(method, CPPClassUnit::PROTECTED);

    return myClass.compile();
}*/

shared_ptr<AbstractClassUnit> CPPFactory::createClass(const string &name)
{
    return make_shared<CPPClassUnit>(name);
}

shared_ptr<AbstractMethodUnit> CPPFactory::createMethod(const string &name, const string &returnType, Flags flags)
{
    return make_shared<CPPMethodUnit>(name, returnType, flags);
}

shared_ptr<AbstractMethodBodyUnit> CPPFactory::createMethodBody(const string &text)
{
    return make_shared<CPPPrintOperatorUnit>(text);
}
