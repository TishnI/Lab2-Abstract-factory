#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H

#include "AbstractMethodBodyUnit.h"

class CPPPrintOperatorUnit : public AbstractMethodBodyUnit
{
public:
    explicit CPPPrintOperatorUnit(const string& text);
    string compile(unsigned int level = 0) const;
};

#endif // CPPPRINTOPERATORUNIT_H
