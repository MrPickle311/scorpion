#ifndef MAIN_CORRECT_CHECK_ENGIGNE
#define MAIN_CORRECT_CHECK_ENGIGNE
#include "Correct_checker_engine_base.hpp"
#include "Main_command.hpp"

class Main_correct_checker_engine: public Correct_checker_engine_base
{
private:
    virtual void process() override
    {
        if(!flag_.load())
        {

            try
            {
                this->amb_nmbr_ = std::count_if(func_list_->begin(),func_list_->end(),
                                                [&](const func_type_ptr& f){return f->operator()(*command_) == true;});
                flag_.store(true);
            }
            catch (const std::exception& e)
            {
                std::cout << e.what() << std::endl;
            }

        }
    }
public:
    Main_correct_checker_engine(const Main_command& cmd):Correct_checker_engine_base{cmd.load()}
    {

    }
    virtual void add_function(std::function<bool(std::string)>&& func) override
    {
        if(!flag_.load())
        {
            try
            {
                std::unique_ptr<func_type> f {new func_type{std::move(func)}};
                func_list_->push_back(std::move(f));
            } catch (const std::exception& e)
            {
                std::cout << e.what() << std::endl;
            }

        }
    }

    virtual bool is_ambigious() override
    {
        try {
            process();
            return this->amb_nmbr_ > 1;
        } catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
            return true;
        }
    }
    virtual bool is_correct() override
    {
        process();
    }
};

#endif
