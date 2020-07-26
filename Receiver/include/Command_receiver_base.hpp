#ifndef COMMAND_RECEIVER_BASE_HPP
#define COMMAND_RECEIVER_BASE_HPP

#include "Command_receiver_base_interfaces.hpp"



class Command_receiver_base: public Command_receiver_input_base,
                             public Command_receiver_output_base
{
protected:
    std::string getline_loop(std::function<bool(std::string)> );
public:
    virtual std::unique_ptr<Command_base> run() = 0;
};






#endif // COMMAND_RECEIVER_BASE_HPP
