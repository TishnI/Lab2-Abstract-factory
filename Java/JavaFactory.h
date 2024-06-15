#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H

#include <ICodeFactory.h>

#include "JavaClassUnit.h"
#include "JavaMethodUnit.h"
#include "JavaPrintOperatorUnit.h"

class JavaFactory : public ICodeFactory
{
public:
    JavaFactory() = default;
    ~JavaFactory() = default;

    shared_ptr<AbstractClassUnit> createClass(const string &name);
    shared_ptr<AbstractMethodUnit> createMethod(const string &name, const string &returnType, Flags flags);
    shared_ptr<AbstractMethodBodyUnit> createMethodBody(const string &text);
};

#endif // JAVAFACTORY_H
