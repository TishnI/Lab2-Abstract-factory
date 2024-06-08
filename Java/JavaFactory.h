#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H

#include <AbstractFactory.h>

#include "JavaClassUnit.h"
#include "JavaMethodUnit.h"
#include "JavaPrintOperatorUnit.h"

class JavaFactory : public AbstractFactory
{
public:
    JavaFactory() = default;
    ~JavaFactory() = default;

    virtual shared_ptr<AbstractClassUnit> createClass(const string &name);
    virtual shared_ptr<AbstractMethodUnit> createMethod(const string &name, const string &returnType, Flags flags);
    virtual shared_ptr<AbstractMethodBodyUnit> createMethodBody(const string &text);
};

#endif // JAVAFACTORY_H
