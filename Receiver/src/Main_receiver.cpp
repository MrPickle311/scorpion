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
        return this->getline_loop(std::move(pred));
    } catch (const std::exception& e)
    {
        return std::string{std::string{"exit :"} + std::string{e.what()}};
    }
     return std::string{std::string{"exit"}};
}

std::unique_ptr<std::string> Main_receiver::run()
{
    return std::unique_ptr<std::string> {new std::string{get_command_from_user()}};
}
