#ifndef PARSER_BASE_H
#define PARSER_BASE_H
#include "Command_base_interfaces.hpp"

class Parser_base: public Command_input_base,
                   public Command_output_base
{
public:
    Parser_base();
};

#endif // PARSER_BASE_H
