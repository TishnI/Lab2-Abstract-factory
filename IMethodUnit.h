#ifndef IMETHODUNIT_H
#define IMETHODUNIT_H

#include "Unit.h"

class IMethodUnit : public Unit
{
public:
    virtual ~IMethodUnit() = default;
    virtual void add(const shared_ptr<Unit>&, Flags);
    virtual string compile(unsigned int level = 0) const = 0;
};

#endif // IMETHODUNIT_H
