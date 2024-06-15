#include "JavaFactory.h"

shared_ptr<AbstractClassUnit> JavaFactory::createClass(const string &name)
{
    return make_shared<JavaClassUnit>(name);
}

shared_ptr<AbstractMethodUnit> JavaFactory::createMethod(const string &name, const string &returnType, Flags flags)
{
    return make_shared<JavaMethodUnit>(name, returnType, flags);
}

shared_ptr<AbstractMethodBodyUnit> JavaFactory::createMethodBody(const string &text)
{
    return make_shared<JavaPrintOperatorUnit>(text);
}
