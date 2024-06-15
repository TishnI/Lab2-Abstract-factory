#include "CSharpPrintOperatorUnit.h"

CSharpPrintOperatorUnit::CSharpPrintOperatorUnit(const string &text): AbstractMethodBodyUnit(text) {}

string CSharpPrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "Console.WriteLine(\"" + m_text + "\");\n";
}
