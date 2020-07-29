#ifndef CORRECT_CHECK_ENGIGNE_BASE_INTERFACES
#define CORRECT_CHECK_ENGIGNE_BASE_INTERFACES

#include <memory>
#include <functional>
#include <algorithm>
#include <iostream>
#include <atomic>
#include <list>

using predicate = std::function<bool(std::string)>;
using predicate_ptr = std::unique_ptr<std::function<bool(std::string)>>;

class Correct_checker_engine_input_base
{
public:
    virtual void add_predicate(std::function<bool(std::string)>&& func) = 0;
};

class Correct_checker_engine_output_base
{
public:
    virtual bool is_ambigious() = 0;
    virtual  bool is_correct() = 0;
};

class Correct_checker_engine_inside_base
{
protected:
    virtual void process() = 0;
};

#endif
