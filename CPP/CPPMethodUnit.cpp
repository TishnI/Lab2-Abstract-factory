#include "CPPMethodUnit.h"

CPPMethodUnit::CPPMethodUnit(const string &name, const string &returnType, Flags flags)
    : AbstractMethodUnit(name, returnType, flags)
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

    if(m_flags & ABSTRACT)
    {
        qWarning("C++ does not contain the abstract keyword");
    }

    result += m_returnType + " ";
    result += m_name + "()";

    if(m_flags & CONST)
    {
        result += " const";
    }
    if(m_flags & VIRTUAL)
    {
        if(m_flags & FINAL)
        {
            result += " final";
        }
    }

    result += " {\n";

    for(const auto& b: m_body)
    {
        result += b->compile(level+1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
