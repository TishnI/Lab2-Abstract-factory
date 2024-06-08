#ifndef CPPFACTORY_H
#define CPPFACTORY_H

#include <ICodeFactory.h>
#include"CPPClassUnit.h"
#include"CPPMethodUnit.h"
#include"CPPPrintOperatorUnit.h"

class CPPFactory : public ICodeFactory
{
public:
    CPPFactory() = default;
    ~CPPFactory() = default;

    virtual shared_ptr<AbstractClassUnit> createClass(const string &name);
    virtual shared_ptr<AbstractMethodUnit> createMethod(const string &name, const string &returnType, Flags flags);
    virtual shared_ptr<AbstractMethodBodyUnit> createMethodBody(const string &text);

};

#endif // CPPFACTORY_H
