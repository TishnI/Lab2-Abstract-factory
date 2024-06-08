#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H

#include "AbstractClassUnit.h"

class CSharpClassUnit : public AbstractClassUnit
{
public:
    static const vector<string> MODIFIERS;

public:
    explicit CSharpClassUnit(const string& name);
    ~CSharpClassUnit() = default;
    void add(const shared_ptr<Unit>& unit, Flags flags);
    string compile(unsigned int level = 0) const;
};

#endif // CSHARPCLASSUNIT_H
