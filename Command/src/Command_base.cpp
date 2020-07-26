#include "Command_base.hpp"

Command_base::Command_base(): command_{}
{

}

Command_base::Command_base(std::string && cmd):command_{std::move(cmd)}
{

}
