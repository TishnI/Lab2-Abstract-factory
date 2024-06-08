#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include<iostream>
#include <vector>
#include <memory>


#include "AbstractClassUnit.h"
#include "AbstractMethodUnit.h"
#include "AbstractMethodBodyUnit.h"

using std::string;
using std::runtime_error;
using std::shared_ptr;
using std::make_shared;
using std::vector;

class AbstractFactory
{
public:
    using Flags = unsigned int;
    virtual shared_ptr<AbstractClassUnit> createClass(const string& name) = 0;
    virtual shared_ptr<AbstractMethodUnit> createMethod(const string& name, const string& returnType, Flags flags) = 0;
    virtual shared_ptr<AbstractMethodBodyUnit> createMethodBody(const string& text) = 0;
};

#endif // ABSTRACTFACTORY_H
