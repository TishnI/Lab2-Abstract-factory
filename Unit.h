#ifndef UNIT_H
#define UNIT_H
#include <iostream>

using std::string;
using std::runtime_error;
using std::shared_ptr;
using std::vector;


class Unit
{
public:
    using Flags = unsigned int;
    virtual ~Unit() = default;
    virtual void add(const shared_ptr<Unit>&, Flags);
    virtual string compile(unsigned int level = 0) const = 0;

protected:
    virtual string generateShift(unsigned int level) const;
};

#endif // UNIT_H
