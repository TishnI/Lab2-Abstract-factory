#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H

#include <ICodeFactory.h>
#include"CSharpClassUnit.h"
#include"CSharpMethodUnit.h"
#include"CSharpPrintOperatorUnit.h"

class CSharpFactory : public ICodeFactory
{
public:
    virtual string generateProgram();
};

#endif // CSHARPFACTORY_H
