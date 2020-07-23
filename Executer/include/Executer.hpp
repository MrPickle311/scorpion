#ifndef EXECUTER_HPP
#define EXECUTER_HPP
#include <sigslot/signal.hpp>
#include "Manager_base.hpp"
#include <atomic>
#include <memory>

class Data_preparator_base
{
public:
    virtual ~Data_preparator_base() {};
protected:
    virtual void prepare_data() = 0;
};


class Main_data_preparator : protected Data_preparator_base
{
public:
    Main_data_preparator() {}

    // Data_preparator_base interface
public:
    virtual void prepare_data() override final;
private:
    std::atomic_bool done_flag_;
private:
};


class Executer_base
{
public:
    virtual ~Executer_base() {};
    virtual void run() = 0;
    virtual void execute_manager() = 0;
};

class Main_executer : protected Executer_base
{
public:
    Main_executer();

    // Executer_base interface
public:
    virtual void run() override;
private:
    std::unique_ptr<Main_data_preparator> preparator_;
    std::unique_ptr<Main_manager> manager_;
private:
    virtual void execute_manager() override;
};



#endif //EXECUTER
