#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H

#include <ICodeFactory.h>
#include"CSharpClassUnit.h"
#include"CSharpMethodUnit.h"
#include"CSharpPrintOperatorUnit.h"

class CSharpFactory : public ICodeFactory
{
public:
    virtual shared_ptr<AbstractClassUnit> createClass(const string &name);
    virtual shared_ptr<AbstractMethodUnit> createMethod(const string &name, const string &returnType, Flags flags);
    virtual shared_ptr<AbstractMethodBodyUnit> createMethodBody(const string &text);
};

#endif // CSHARPFACTORY_H
