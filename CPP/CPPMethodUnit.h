#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H

#include "IMethodUnit.h"

class CPPMethodUnit : public IMethodUnit
{
public:
    enum Modifier
    {
        STATIC  = 1,
        CONST   = 1 << 1,
        VIRTUAL = 1 << 2
    };

public:
    CPPMethodUnit(const string& name, const string& returnType, Flags flags);
    void add(const shared_ptr<Unit>& unit, Flags /*flags*/ = 0);
    string compile(unsigned int level = 0) const;

private:
    string m_name;
    string m_returnType;
    Flags m_flags;
    vector<shared_ptr<Unit>> m_body;
};

#endif // CPPMETHODUNIT_H
