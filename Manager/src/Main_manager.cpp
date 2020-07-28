#include "Main_manager.hpp"

Main_manager::Main_manager(): receiver_{new Main_receiver{}}
{

}


std::string Main_manager::run_command_receiver()
{

}

void Main_manager::run_parser(std::unique_ptr<Command_base> && cmd)
{

}

void Main_manager::run()
{

}
