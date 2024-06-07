#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H

#include "IClassUnit.h"

class CPPClassUnit : public IClassUnit
{
public:
    enum AccessModifier
    {
        PUBLIC,
        PROTECTED,
        PRIVATE
    };

    static const vector<string> ACCESS_MODIFIERS;

public:
    explicit CPPClassUnit(const string& name);
    void add(const shared_ptr<Unit>& unit, Flags flags);
    string compile(unsigned int level = 0) const;

private:
    string m_name;
    using Fields = vector<shared_ptr<Unit>>;
    vector<Fields> m_fields;
};

#endif // CPPCLASSUNIT_H
