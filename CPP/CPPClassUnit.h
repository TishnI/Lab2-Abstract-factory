#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H

#include "AbstractClassUnit.h"

class CPPClassUnit : public AbstractClassUnit
{
public:
    static const vector<string> ACCESS_MODIFIERS;

public:
    explicit CPPClassUnit(const string& name);
    ~CPPClassUnit() = default;
    void add(const shared_ptr<Unit>& unit, Flags flags);
    string compile(unsigned int level = 0) const;
};

#endif // CPPCLASSUNIT_H
