#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H

#include <AbstractMethodBodyUnit.h>

class CSharpPrintOperatorUnit : public AbstractMethodBodyUnit
{
public:
    explicit CSharpPrintOperatorUnit(const string& text);
    string compile(unsigned int level = 0) const;
};

#endif // CSHARPPRINTOPERATORUNIT_H
