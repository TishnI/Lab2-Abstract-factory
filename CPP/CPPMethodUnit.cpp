#include "CPPMethodUnit.h"

CPPMethodUnit::CPPMethodUnit(const string &name, const string &returnType, Flags flags)
    : m_name(name), m_returnType(returnType), m_flags(flags)
{}

void CPPMethodUnit::add(const shared_ptr<Unit> &unit, Flags)
{
    m_body.push_back(unit);
}

string CPPMethodUnit::compile(unsigned int level) const
{
    string result = generateShift(level);

    if(m_flags & STATIC)
    {
        result += "static ";
    }
    else if(m_flags & VIRTUAL)
    {
        result += "virtual ";
    }
    result += m_returnType + " ";
    result += m_name + " () ";
    if(m_flags & CONST)
    {
        result += " const";
    }
    result += " {\n";

    for(const auto& b: m_body)
    {
        result += b->compile(level+1);
    }
    result += generateShift(level) + "}\n";
    return result;
}