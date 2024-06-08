#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H

#include <AbstractMethodUnit.h>

class CSharpMethodUnit : public AbstractMethodUnit
{
public:
    explicit CSharpMethodUnit(const string& name, const string& returnType, Flags flags);
    ~CSharpMethodUnit() = default;
    void add(const shared_ptr<Unit>& unit, Flags /*flags*/ = 0);
    string compile(unsigned int level = 0) const;
};

#endif // CSHARPMETHODUNIT_H
