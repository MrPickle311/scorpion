#include "Main_receiver.hpp"
#include "Main_command.hpp"

Main_receiver::Main_receiver()
{

}

std::string Main_receiver::get_command_from_user()
{
    try
    {
        std::function<bool(std::string)> pred =[&](const std::string& str)->bool{return str.empty();};
        this->getline_loop(std::move(pred));
    } catch (const std::exception& e)
    {
        return std::string{std::string{"exit :"} + std::string{e.what()}};
    }
     return std::string{std::string{"exit"}};
}

std::unique_ptr<Command_base> Main_receiver::run()
{
    std::string str {get_command_from_user()};
    std::unique_ptr<Command_base> cmd {new Main_command{}};
    cmd->store(str);
    //parser
    return cmd;
}
