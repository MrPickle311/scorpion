#ifndef COMMAND_BASE_HPP
#define COMMAND_BASE_HPP
#include "Command_base_interfaces.hpp"

class Command_base: public Command_input_base,public Command_output_base
{
protected:
    Command_base();
    Command_base(std::string&&);
protected:
    std::string command_;
public:
    virtual ~Command_base() {};
};

#endif // COMMAND_BASE_HPP
