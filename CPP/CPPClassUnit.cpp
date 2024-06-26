#include "CPPClassUnit.h"

CPPClassUnit::CPPClassUnit(const string &name):AbstractClassUnit(name)
{
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void CPPClassUnit::add(const shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = PRIVATE;

    if(flags < ACCESS_MODIFIERS.size())
    {
        accessModifier = flags;
    }
    else
    {
        qWarning("C++ does not support this access modifier.");
    }

    m_fields[accessModifier].push_back(unit);
}

string CPPClassUnit::compile(unsigned int level) const
{
    string result = generateShift(level) + "class " + m_name + " {\n";

    for(size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i)
    {
        if(m_fields[i].empty())
        {
            continue;
        }

        result += ACCESS_MODIFIERS[i] + ":\n";
        for(const auto& f : m_fields[i])
        {
            result += f->compile(level + 1);

        }
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}

const vector<string> CPPClassUnit::ACCESS_MODIFIERS = {"public", "protected", "private"};
