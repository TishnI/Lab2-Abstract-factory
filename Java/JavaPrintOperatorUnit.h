#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include <AbstractMethodBodyUnit.h>

class JavaPrintOperatorUnit : public AbstractMethodBodyUnit
{
public:
    explicit JavaPrintOperatorUnit(const string& text);
    ~JavaPrintOperatorUnit() = default;
    string compile(unsigned int level = 0) const;
};

#endif // JAVAPRINTOPERATORUNIT_H
