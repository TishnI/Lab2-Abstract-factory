#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H

#include <AbstractMethodBodyUnit.h>

class CSharpPrintOperatorUnit : public AbstractMethodBodyUnit
{
public:
    explicit CSharpPrintOperatorUnit(const string& text);
    ~CSharpPrintOperatorUnit() = default;
    string compile(unsigned int level = 0) const;
};

#endif // CSHARPPRINTOPERATORUNIT_H
