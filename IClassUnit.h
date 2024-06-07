#ifndef ICLASSUNIT_H
#define ICLASSUNIT_H

#include "Unit.h"

class IClassUnit : public Unit
{
public:
    virtual ~IClassUnit() = default;
    virtual void add(const shared_ptr<Unit>&, Flags);
    virtual string compile(unsigned int level = 0) const = 0;
};

#endif // ICLASSUNIT_H
