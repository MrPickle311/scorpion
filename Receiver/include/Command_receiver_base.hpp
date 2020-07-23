#ifndef COMMAND_RECEIVER_BASE_HPP
#define COMMAND_RECEIVER_BASE_HPP
#include <sigslot/signal.hpp>
#include "Syntax_checker_base.hpp"
#include <string>
#include <memory>
#include <atomic>
#include "Command_base.hpp"
#include <functional>
#include <iostream>
#include "Converter.hpp"

//niezmienniki
//receiver zawsze zwraca prawidłową główną komendę

//kontakt z zewnątrz
class Command_receiver_input_base
{

};

class Command_receiver_output_base
{
protected:
    virtual std::unique_ptr<Command_base> return_command() = 0;
};



//
class Command_receiver_base: public Command_input_base,public Command_output_base
{
protected:
    std::unique_ptr<std::atomic_bool> abort_flag_;
protected:
    template<class T>
    T getline_loop(std::function<bool(T)>  , std::unique_ptr<Converter_base<std::string,T>> );
private:
    virtual std::string get_command_from_user() = 0;
public:
    virtual std::unique_ptr<Command_base> run() = 0;
};

class Main_receiver: public Command_receiver_base
{
public:
    Main_receiver() {}

    // Command_output_base interface
public:
    virtual std::string get() const override;

    // Command_input_base interface
public:
    virtual void load(const std::string &) override;

    // Command_receiver_base interface
private:
    virtual std::string get_command_from_user() override;

public:
    virtual std::unique_ptr<Command_base> run() override;
};

#endif // COMMAND_RECEIVER_BASE_HPP
