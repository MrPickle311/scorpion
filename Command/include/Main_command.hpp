#ifndef MAIN_COMMAND_H
#define MAIN_COMMAND_H


#include "Command_base.hpp"

class Main_command : public Command_base<std::string>
{
    public: enum class Command_type{exit,order,program,script};
private:
    Command_type command_type_;

    //Main_command interface
public:
     Main_command();
     Main_command(const Main_command&) = delete ;
     Main_command(Main_command&&);
     Main_command& operator= (const Main_command&) = delete;
     Command_type get_command_type() const;
     void set_command_type(const Command_type&);

     // Command_output_base interface
public:
     virtual std::string load() const override;

     // Command_input_base interface
public:
     virtual void store(const std::string &) override;
};

#endif // MAIN_COMMAND_H
