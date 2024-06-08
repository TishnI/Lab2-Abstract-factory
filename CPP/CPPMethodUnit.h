#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H

#include "AbstractMethodUnit.h"

class CPPMethodUnit : public AbstractMethodUnit
{
public:
    CPPMethodUnit(const string& name, const string& returnType, Flags flags);
    void add(const shared_ptr<Unit>& unit, Flags /*flags*/ = 0);
    string compile(unsigned int level = 0) const;
};

#endif // CPPMETHODUNIT_H
