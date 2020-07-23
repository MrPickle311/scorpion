#include "Command_base.hpp"


std::string Main_command::get() const
{
    return this->command_;
}

void Main_command::load(const std::string & command)
{
    this->command_ = command;
}

Main_command::Main_command():command_{},command_type_{What::exit}
{

}

Main_command::Main_command(Main_command && other):command_{other.command_},command_type_{other.command_type_}
{

}

Main_command::What Main_command::get_command_type() const
{
    return this->command_type_;
}

void Main_command::set_command_type(const Main_command::What& command_type)
{
    this->command_type_ = command_type;
}
