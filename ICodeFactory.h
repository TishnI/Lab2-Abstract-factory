#ifndef ICODEFACTORY_H
#define ICODEFACTORY_H
#include<iostream>
#include <vector>
#include <memory>

using std::string;
using std::runtime_error;
using std::shared_ptr;
using std::vector;

class ICodeFactory
{
public:
    virtual ~ICodeFactory() = default;
    virtual string generateProgram() = 0;
};

#endif // ICODEFACTORY_H
