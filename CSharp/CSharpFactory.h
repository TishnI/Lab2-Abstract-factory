#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H

#include <AbstractFactory.h>
#include"CSharpClassUnit.h"
#include"CSharpMethodUnit.h"
#include"CSharpPrintOperatorUnit.h"

class CSharpFactory : public AbstractFactory
{
public:
    CSharpFactory() = default;
    ~CSharpFactory() = default;

    virtual shared_ptr<AbstractClassUnit> createClass(const string &name);
    virtual shared_ptr<AbstractMethodUnit> createMethod(const string &name, const string &returnType, Flags flags);
    virtual shared_ptr<AbstractMethodBodyUnit> createMethodBody(const string &text);
};

#endif // CSHARPFACTORY_H
