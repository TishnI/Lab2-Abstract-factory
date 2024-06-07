#include "PrintOperatorUnit.h"

PrintOperatorUnit::PrintOperatorUnit(const string &text) : m_text(text) {}

string PrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
}
