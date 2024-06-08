#ifndef CPPFACTORY_H
#define CPPFACTORY_H

#include <ICodeFactory.h>
#include"CPPClassUnit.h"
#include"CPPMethodUnit.h"
#include"CPPPrintOperatorUnit.h"

class CPPFactory : public ICodeFactory
{
public:
    virtual string generateProgram();
};

#endif // CPPFACTORY_H
