#ifndef ABSTRACTMETHODBODYUNIT_H
#define ABSTRACTMETHODBODYUNIT_H

#include "Unit.h"

class AbstractMethodBodyUnit : public Unit
{
public:
    AbstractMethodBodyUnit(const string& text);
    virtual ~AbstractMethodBodyUnit() = default;
protected:
    string m_text;
};

#endif // ABSTRACTMETHODBODYUNIT_H
