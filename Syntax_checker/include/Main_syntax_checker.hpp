#ifndef MAIN_SYNTAX_CHECKER_H
#define MAIN_SYNTAX_CHECKER_H
#include "Syntax_checker_base.hpp"
#include <list>
#include "Main_command.hpp"
#include <algorithm>
#include <atomic>
#include <iostream>

class Ambigious_checker
{
    using func_type = std::function<bool(std::string)>;
    using func_type_ptr = std::unique_ptr<std::function<bool(std::string)>>;
private:
    std::unique_ptr<std::list<func_type_ptr>> func_list_;
    std::unique_ptr<std::string> command_str_;
    size_t amb_nmbr_;
    std::atomic_bool flag_;
private:
    void process()
    {
        if(!flag_.load())
        {

            try
            {
                this->amb_nmbr_ = std::count_if(func_list_->begin(),func_list_->end(),
                                                [&](const func_type_ptr& f){return f->operator()(*command_str_) == true;});
                flag_.store(true);
            }
            catch (const std::exception& e)
            {
                std::cout << e.what() << std::endl;
            }

        }
    }
public:
    Ambigious_checker(const Main_command& cmd):
        func_list_{new std::list<func_type_ptr>{}},
        command_str_{new std::string{cmd.load()}},
        flag_{false}
    {

    }
    void add_function(std::function<bool(std::string)>&& func)
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

    bool is_ambigious()
    {
        try {
            process();
            return this->amb_nmbr_ > 1;
        } catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
            return true;
        }
    }
    bool is_correct()
    {
        process();
    }
};


class Main_syntax_checker: public Syntax_checker_base
{
public:
    Main_syntax_checker();

    // Syntax_checker_input_output_base interface


private:
    virtual bool check_syntax(std::string) override;
};

#endif // MAIN_SYNTAX_CHECKER_H
