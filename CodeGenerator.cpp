#include "CodeGenerator.h"

string CodeGenerator::generateCode(ICodeFactory &factory)
{
    return factory.generateProgram();
}
