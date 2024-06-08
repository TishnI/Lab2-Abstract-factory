#ifndef ABSTRACTCLASSUNIT_H
#define ABSTRACTCLASSUNIT_H

#include "Unit.h"

class AbstractClassUnit : public Unit
{
public:
    enum AccessModifier
    {
        PUBLIC,
        PROTECTED,
        PRIVATE,
        PRIVATE_PROTECTED,
        INTERNAL,
        PROTECTED_INTERNAL
    };

    AbstractClassUnit(const string& name);

protected:
    string m_name;
    using Fields = vector<shared_ptr<Unit>>;
    vector<Fields> m_fields;
};

#endif // ABSTRACTCLASSUNIT_H
