#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include "Unit.h"

class ClassUnit : public Unit
{
public:
    enum AccessModifier
    {
        PUBLIC,
        PROTECTED,
        PRIVATE
    };

    static const vector<string> ACCESS_MODIFIERS;

    explicit ClassUnit(const string& name);

    void add(const shared_ptr<Unit>& unit, Flags flags);
    string compile(unsigned int level = 0) const;

private:
    string m_name;
    using Fields = vector<shared_ptr<Unit>>;
    vector<Fields> m_fields;
};

#endif // CLASSUNIT_H
