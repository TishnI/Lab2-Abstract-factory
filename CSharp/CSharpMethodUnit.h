#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H

#include <AbstractMethodUnit.h>

class CSharpMethodUnit : public AbstractMethodUnit
{
public:
    CSharpMethodUnit(const string& name, const string& returnType, Flags flags);
    void add(const shared_ptr<Unit>& unit, Flags /*flags*/ = 0);
    string compile(unsigned int level = 0) const;
};

#endif // CSHARPMETHODUNIT_H
