#include "CPPPrintOperatorUnit.h"

CPPPrintOperatorUnit::CPPPrintOperatorUnit(const string &text) : AbstractMethodBodyUnit(text) {}

string CPPPrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
}
