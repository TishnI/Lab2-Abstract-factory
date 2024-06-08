#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H

#include "AbstractMethodUnit.h"

class CPPMethodUnit : public AbstractMethodUnit
{
public:
    explicit CPPMethodUnit(const string& name, const string& returnType, Flags flags);
    ~CPPMethodUnit() = default;
    void add(const shared_ptr<Unit>& unit, Flags = 0);
    string compile(unsigned int level = 0) const;
};

#endif // CPPMETHODUNIT_H
