#include "JavaMethodUnit.h"

JavaMethodUnit::JavaMethodUnit(const string &name, const string &returnType, Flags flags)
    : AbstractMethodUnit(name, returnType, flags)
{}

void JavaMethodUnit::add(const shared_ptr<Unit> &unit, Flags)
{
    m_body.push_back(unit);
}

string JavaMethodUnit::compile(unsigned int level) const
{
    string result = "";

    if(m_flags & ABSTRACT)
    {
        result += "abstract " + m_returnType + " " + m_name + "();";
        return result;
    }
    else if(m_flags & STATIC)
    {
        result += "static ";
    }
    else if(m_flags & FINAL)
    {
        result += "final ";
    }
    if(m_flags & CONST)
    {
        qWarning("Java does not support const method");
    }
    if(m_flags & VIRTUAL)
    {
        qWarning("Java does not contain the virtual keyword");
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
