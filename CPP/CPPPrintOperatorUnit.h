#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H

#include "IMethodBodyUnit.h"

class CPPPrintOperatorUnit : public IMethodBodyUnit
{
public:
    explicit CPPPrintOperatorUnit(const string& text);
    string compile(unsigned int level = 0) const;

private:
    string m_text;
};

#endif // CPPPRINTOPERATORUNIT_H
