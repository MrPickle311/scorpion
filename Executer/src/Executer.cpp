#include "Executer.hpp"



void Main_data_preparator::prepare_data()
{

}

Main_executer::Main_executer(): preparator_{new Main_data_preparator{}},manager_{new Main_manager{}}
{

}

void Main_executer::run()
{
    this->preparator_->prepare_data();
    this->execute_manager();
}

void Main_executer::execute_manager()
{
    this->manager_->run();
}
