#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H

#include "Unit.h"

class PrintOperatorUnit : public Unit
{
public:
    explicit PrintOperatorUnit(const string& text);
    string compile(unsigned int level = 0) const;

private:
    string m_text;
};

#endif // PRINTOPERATORUNIT_H
