#include "CSharpMethodUnit.h"

CSharpMethodUnit::CSharpMethodUnit(const string &name, const string &returnType, Flags flags)
    : AbstractMethodUnit(name, returnType, flags)
{}

void CSharpMethodUnit::add(const shared_ptr<Unit> &unit, Flags)
{
    m_body.push_back(unit);
}

string CSharpMethodUnit::compile(unsigned int level) const
{
    string result = "";

    if(m_flags & STATIC)
    {
        result += "static ";
    }
    else if(m_flags & VIRTUAL)
    {
        result += "virtual ";
    }
    result += m_returnType + " " + m_name + "() ";
    result += " {\n";

    for(const auto& b: m_body)
    {
        result += b->compile(level+1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
