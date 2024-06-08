#include "CSharpClassUnit.h"

CSharpClassUnit::CSharpClassUnit(const string &name):AbstractClassUnit(name)
{
    m_fields.resize(MODIFIERS.size());
}

void CSharpClassUnit::add(const shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = PRIVATE;

    if(flags < MODIFIERS.size())
    {
        accessModifier = flags;
    }
    else
    {
        qWarning("C# does not support this access modifier.");
    }

    m_fields[accessModifier].push_back(unit);
}

string CSharpClassUnit::compile(unsigned int level) const
{
    string result = generateShift(level) + "class " + m_name + " {\n";

    for(size_t i = 0; i < MODIFIERS.size(); ++i)
    {
        if(m_fields[i].empty())
        {
            continue;
        }
        for(const auto& f : m_fields[i])
        {
            result += generateShift(level + 1) + MODIFIERS[i] + " " + f->compile(level + 1);

        }
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}

const vector<string> CSharpClassUnit::MODIFIERS = {"public", "protected", "private", "private protected", "internal", "protected internal", "file"};
