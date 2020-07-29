#ifndef COMMAND_EXCEPTION_BASE_HPP
#define COMMAND_EXCEPTION_BASE_HPP
#include "Error_base.hpp"

class Command_exception_base : public Exception_base
{
public:
    Command_exception_base();

    // exception interface
public:
    virtual const char *what() const noexcept override;
};

#endif // COMMAND_EXCEPTION_BASE_HPP
