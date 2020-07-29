#ifndef PARSER_BASE_H
#define PARSER_BASE_H
#include "Parser_base_interfaces.hpp"

class Parser_base: public Parser_base_input,
                   public Parser_base_output
{
protected:

protected:
    const std::regex csyntax_;
public:
    Parser_base(std::string);

};

#endif // PARSER_BASE_H
