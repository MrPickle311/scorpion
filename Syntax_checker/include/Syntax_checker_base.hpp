#ifndef SYNTAX_CHECKER_BASE_H
#define SYNTAX_CHECKER_BASE_H
#include "Command_base.hpp"
#include <memory>

template <class T>
using derivative  = std::unique_ptr<T>;

class Syntax_checker_input_base
{
public:

};

class Syntax_checker_output_base
{
public:

};

class Syntax_checker_input_output_base
{
public:
    virtual bool check_syntax( derivative<Command_base> &&) = 0;
};

class Syntax_checker_base: public Syntax_checker_input_base,public Syntax_checker_output_base,public Syntax_checker_input_output_base
{
private:

public:

public:

};

class Main_syntax_checker: public Syntax_checker_base
{
public:
    Main_syntax_checker() {}
};

#endif // SYNTAX_CHECKER_BASE_H
