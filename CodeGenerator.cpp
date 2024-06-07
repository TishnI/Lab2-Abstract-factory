#include "CodeGenerator.h"

string CodeGenerator::GenerateCode(ICodeFactory &factory)
{
    return factory.GenerateProgram();
}
