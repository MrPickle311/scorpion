#ifndef MAIN_SYNTAX_CHECKER_H
#define MAIN_SYNTAX_CHECKER_H
#include "Syntax_checker_base.hpp"
#include <list>
#include "Main_command.hpp"
#include "Main_correct_checker_engine.hpp"
#include <algorithm>
#include <atomic>
#include <iostream>



//dysponuje kolekcją predykatów składniowych i zarządza nimi
class Main_syntax_checker: public Syntax_checker_base
{
private:
    Main_correct_checker_engine engine_;
public:
    Main_syntax_checker();

    // Syntax_checker_input_output_base interface

private:
    virtual bool check_syntax(std::string) override;
};

#endif // MAIN_SYNTAX_CHECKER_H
