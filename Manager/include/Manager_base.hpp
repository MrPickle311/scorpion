#ifndef MANAGER_BASE_HPP
#define MANAGER_BASE_HPP
#include "Command_base.hpp"
#include "Main_receiver.hpp"
#include "sigslot/signal.hpp"
#include <atomic>

//niezmienniki
//manager nic nie przechowuje OPRÓCZ SYGNAŁÓW

class Manager_input
{
public:
    virtual ~Manager_input() {};
public:

};

class Manager_output
{
public:
    virtual ~Manager_output() {};
private:
    virtual void run_parser(std::unique_ptr<Command_output_base> &&) = 0;
};

class Manager_input_output
{
public:
    virtual ~Manager_input_output() {};
private:
    virtual void run_command_receiver() = 0;
};

class Manager_base: public Manager_input, public Manager_output, public Manager_input_output
{
protected:
    std::atomic_bool done_flag_;
public:
     virtual ~Manager_base() {};
public:
     virtual void run() = 0;
};

class Main_manager: public Manager_base
{

private:
    std::unique_ptr<Main_receiver> receiver_;
public:
    Main_manager();

    // Manager_input_output interface
private:
    virtual void run_command_receiver() override final;

    // Manager_output interface
private:
    virtual void run_parser(std::unique_ptr<Command_output_base> &&) override final;

    // Manager_base interface
public:
     virtual void run() override;
};
#endif // MANAGER_BASE_HPP
