#include "CPPFactory.h"

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
