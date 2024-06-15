#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H

#include <ICodeFactory.h>
#include"CSharpClassUnit.h"
#include"CSharpMethodUnit.h"
#include"CSharpPrintOperatorUnit.h"

class CSharpFactory : public ICodeFactory
{
public:
    CSharpFactory() = default;
    ~CSharpFactory() = default;

    shared_ptr<AbstractClassUnit> createClass(const string &name);
    shared_ptr<AbstractMethodUnit> createMethod(const string &name, const string &returnType, Flags flags);
    shared_ptr<AbstractMethodBodyUnit> createMethodBody(const string &text);
};

#endif // CSHARPFACTORY_H
