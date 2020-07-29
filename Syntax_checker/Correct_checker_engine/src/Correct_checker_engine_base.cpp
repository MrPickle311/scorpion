#include "Correct_checker_engine_base.hpp"

Correct_checker_engine_base::Correct_checker_engine_base(std::string && command): amb_nmbr_{0},flag_{false},
    func_list_{new std::list<predicate_ptr>{}},command_{new std::string{command}}
{

}

