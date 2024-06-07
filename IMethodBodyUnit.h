#ifndef IMETHODBODYUNIT_H
#define IMETHODBODYUNIT_H

#include "Unit.h"

class IMethodBodyUnit : public Unit
{
public:
    virtual ~IMethodBodyUnit() = default;
    virtual void add(const shared_ptr<Unit>&, Flags);
    virtual string compile(unsigned int level = 0) const = 0;
};

#endif // IMETHODBODYUNIT_H
