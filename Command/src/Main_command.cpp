#include "Main_command.hpp"

Main_command::Main_command():Command_base{}
{

}

Main_command::Main_command(Main_command && other): Command_base{std::move(other.command_)},command_type_{other.command_type_}
{

}

Main_command::Command_type Main_command::get_command_type() const
{
    return this->command_type_;
}

void Main_command::set_command_type(const Main_command::Command_type& command_type)
{
    this->command_type_ = command_type;
}

std::string Main_command::load() const
{
    return this->command_;
}

void Main_command::store(const std::string & n_val)
{
    this->command_ = n_val;
}
