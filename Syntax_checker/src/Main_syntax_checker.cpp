#include "Main_syntax_checker.hpp"


// nie może być dwuznaczności
bool Main_syntax_checker::check_syntax(std::string command)
{
    std::regex qcmd{"(.*){1}(\\{.*\\})"};

}
