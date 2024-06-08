#include "CSharpFactory.h"

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
