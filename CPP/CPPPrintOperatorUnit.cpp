#include "CPPPrintOperatorUnit.h"

CPPPrintOperatorUnit::CPPPrintOperatorUnit(const string &text) : m_text(text) {}

string CPPPrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
}
