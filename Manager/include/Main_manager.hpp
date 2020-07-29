#ifndef MAIN_MANAGER_HPP
#define MAIN_MANAGER_HPP
#include "Manager_base.hpp"
#include "Main_receiver.hpp"
//#include "Main_parser.hpp"

class Main_manager: public Manager_base
{
private:
    std::unique_ptr<Main_receiver> receiver_;
public:
    Main_manager();
     ~Main_manager() = default;

    // Manager_input_output interface
protected:
    virtual std::string run_command_receiver() override;

    // Manager_output interface
protected:
    virtual void run_parser(std::unique_ptr<std::string> &&) override;

    // Manager_base interface
public:
    virtual void run() override;
};


#endif // MAIN_MANAGER_HPP
