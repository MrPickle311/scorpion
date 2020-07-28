#ifndef MANAGER_BASE_HPP
#define MANAGER_BASE_HPP

#include "Manager_base_interfaces.hpp"

class Manager_base: public Manager_input,
                    public Manager_output,
                    public Manager_input_output
{
protected:
    std::atomic_bool done_flag_;
protected:
    Manager_base() noexcept ;

    virtual ~Manager_base() = default;
public:
     virtual void run() = 0;

    // Manager_input_output interface
protected:
    virtual std::string run_command_receiver() override;

    // Manager_output interface
protected:
    virtual void run_parser(std::unique_ptr<Command_base> &&) override;
};


#endif // MANAGER_BASE_HPP
