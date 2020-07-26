#ifndef MAIN_RECEIVER_HPP
#define MAIN_RECEIVER_HPP
#include "Command_receiver_base.hpp"

class Main_receiver: public Command_receiver_base
{
public:
    Main_receiver();


    // Command_receiver_input_base interface
protected:
    virtual std::string get_command_from_user() override;

    // Command_receiver_base interface
public:
    virtual std::unique_ptr<Command_base> run() override;
};

#endif // MAIN_RECEIVER_HPP
