#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include <AbstractMethodBodyUnit.h>

class JavaPrintOperatorUnit : public AbstractMethodBodyUnit
{
public:
    explicit JavaPrintOperatorUnit(const string& text);
    string compile(unsigned int level = 0) const;
};

#endif // JAVAPRINTOPERATORUNIT_H
