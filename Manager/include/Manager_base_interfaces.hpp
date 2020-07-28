#ifndef MANAGER_BASE_INTERFACES_HPP
#define MANAGER_BASE_INTERFACES_HPP
#include "sigslot/signal.hpp"
#include <atomic>
#include <string>
#include "Command_base.hpp"

//niezmienniki

class Manager_input
{
public:
    virtual ~Manager_input() = default;
public:

};

class Manager_output
{
public:
    virtual ~Manager_output() = default;
protected:
    virtual void run_parser(std::unique_ptr<Command_base> &&) = 0;
};

class Manager_input_output
{
public:
    virtual ~Manager_input_output() = default;
protected:
    virtual std::string run_command_receiver() = 0;
};

#endif // MANAGER_BASE_INTERFACES_HPP
