#ifndef COMMAND_BASE_HPP
#define COMMAND_BASE_HPP
#include <memory>
#include <string>
#include "Converter.hpp"

//zszablonować
class Command_input_base
{
public:
    virtual ~Command_input_base() {};
public:
    virtual void load(const std::string&) = 0;

};

class Command_output_base
{
public:
    virtual ~Command_output_base() {};
public:
    virtual std::string get() const = 0;

};


class Command_base: public Command_input_base,public Command_output_base
{
public:
    virtual ~Command_base() {};
};

class Main_command : public Command_base
{
    public: enum class What{exit,order,program,script};
private:
    std::string command_;
    What command_type_;
    // Command_output_base interface
public:
     std::string get() const override;

    // Command_input_base interface
public:
     void load(const std::string &) override;
    //Main_command interface
public:
     Main_command();
     Main_command(const Main_command&) = delete ;
     Main_command(Main_command&&);
     Main_command& operator= (const Main_command&) = delete;
     What get_command_type() const;
     void set_command_type(const What&);
};

#endif // COMMAND_BASE_HPP
