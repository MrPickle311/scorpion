#ifndef SYNTAX_PREDICATES
#define SYNTAX_PREDICATES
#include <string>
#include <regex>
#include <algorithm>


//każda klasa pochodna tej klasy definiuje publicznie TYLKO operator()

class Syntax_predicate_base
{
public:
    virtual bool operator() (std::string) = 0;
};

#endif
