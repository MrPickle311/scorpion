#ifndef SYNTAX_CHECKER_BASE_INTERFACE_HPP
#define SYNTAX_CHECKER_BASE_INTERFACE_HPP
#include <memory>
#include <regex>
#include <string>


class Syntax_checker_input_base
{

};

class Syntax_checker_output_base
{

};

class Syntax_checker_input_output_base
{
    virtual bool check_syntax(std::string) = 0;
};

#endif // SYNTAX_CHECKER_BASE_INTERFACE_HPP
