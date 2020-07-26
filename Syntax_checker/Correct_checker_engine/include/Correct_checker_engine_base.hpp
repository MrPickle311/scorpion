#ifndef CORRECT_CHECK_ENGIGNE_BASE
#define CORRECT_CHECK_ENGIGNE_BASE
#include "Correct_checker_engine_base_interfaces.hpp"

class Correct_checker_engine_base: public Correct_checker_engine_input_base,
                                   public Correct_checker_engine_output_base,
                                   public Correct_checker_engine_inside_base
{
protected:
    Correct_checker_engine_base(std::string&&);
protected:
    size_t amb_nmbr_;
    std::atomic_bool flag_;
    std::unique_ptr<std::list<func_type_ptr>> func_list_;
    std::unique_ptr<std::string> command_;
};

#endif
