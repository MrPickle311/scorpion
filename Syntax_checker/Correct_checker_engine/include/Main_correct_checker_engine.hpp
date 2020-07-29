#ifndef MAIN_CORRECT_CHECK_ENGIGNE
#define MAIN_CORRECT_CHECK_ENGIGNE
#include "Correct_checker_engine_base.hpp"
#include "Main_command.hpp"

class Main_correct_checker_engine: public Correct_checker_engine_base
{

public:
    Main_correct_checker_engine(const Main_command& cmd):Correct_checker_engine_base{cmd.load()}
    {

    }


    virtual bool is_ambigious() override
    {
            process();
            return this->amb_nmbr_ > 1;
    }
    virtual bool is_correct() override
    {
        process();
        return  this->amb_nmbr_ == 1;
    }
};

#endif
