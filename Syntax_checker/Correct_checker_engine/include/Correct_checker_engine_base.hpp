#ifndef CORRECT_CHECK_ENGIGNE_BASE
#define CORRECT_CHECK_ENGIGNE_BASE
#include "Correct_checker_engine_base_interfaces.hpp"

class Correct_checker_engine_base: public Correct_checker_engine_input_base,
                                   public Correct_checker_engine_output_base,
                                   public Correct_checker_engine_inside_base
{
protected:
    virtual void process() override
    {
        if(!flag_.load())
        {
            this->amb_nmbr_ = std::count_if(func_list_->begin(),func_list_->end(),
                                                [&](const predicate_ptr& f){return f->operator()(*command_) == true;});
            flag_.store(true);
        }
    }
public:
    virtual void add_predicate(std::function<bool(std::string)>&& pred) override
    {
        if(!flag_.load())
        {
            try
            {
                std::unique_ptr<predicate> f {new predicate{std::move(pred)}};
                func_list_->push_back(std::move(f));
            } catch (const std::exception& e)
            {
                std::cout << e.what() << std::endl;
            }

        }
    }
protected:
    Correct_checker_engine_base(std::string&&);
protected:
    size_t amb_nmbr_;
    std::atomic_bool flag_;
    std::unique_ptr<std::list<predicate_ptr>> func_list_;
    std::unique_ptr<std::string> command_;
};

#endif
