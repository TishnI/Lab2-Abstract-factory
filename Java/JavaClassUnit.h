#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "AbstractClassUnit.h"

class JavaClassUnit : public AbstractClassUnit
{
public:
    static const vector<string> ACCESS_MODIFIERS;

public:
    explicit JavaClassUnit(const string& name);
    ~JavaClassUnit() = default;
    void add(const shared_ptr<Unit>& unit, Flags flags);
    string compile(unsigned int level = 0) const;
};

#endif // JAVACLASSUNIT_H
