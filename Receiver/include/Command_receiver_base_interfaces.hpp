#ifndef COMMAND_RECEIVER_BASE_INTERFACES_HPP
#define COMMAND_RECEIVER_BASE_INTERFACES_HPP

//#include <sigslot/signal.hpp>
#include "Syntax_checker_base.hpp"
#include <string>
#include <memory>
#include <atomic>
#include "Command_base.hpp"
#include <functional>
#include <iostream>


//niezmienniki


class Command_receiver_input_base
{
protected:
    virtual std::string get_command_from_user() = 0;
};

class Command_receiver_output_base
{


};




#endif // COMMAND_RECEIVER_BASE_INTERFACES_HPP
