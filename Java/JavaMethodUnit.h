#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H

#include <AbstractMethodUnit.h>

class JavaMethodUnit : public AbstractMethodUnit
{
public:
    JavaMethodUnit(const string& name, const string& returnType, Flags flags);
    void add(const shared_ptr<Unit>& unit, Flags /*flags*/ = 0);
    string compile(unsigned int level = 0) const;
};

#endif // JAVAMETHODUNIT_H
