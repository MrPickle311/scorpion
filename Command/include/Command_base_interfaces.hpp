#ifndef COMMAND_BASE_INTERFACES_HPP
#define COMMAND_BASE_INTERFACES_HPP

#include <memory>
#include <string>

class Command_input_base
{
public:
    virtual ~Command_input_base() {};
public:
    virtual void store(const std::string&) = 0;

};

class Command_output_base
{
protected:

public:
    virtual ~Command_output_base() {};
public:
    virtual std::string load() const = 0;

};




#endif // COMMAND_BASE_INTERFACES_HPP
