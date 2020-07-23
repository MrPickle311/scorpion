#include "Manager_base.hpp"

Main_manager::Main_manager()
{

}

void Main_manager::run_command_receiver()
{
    run_parser(this->receiver_->run());
}

void Main_manager::run_parser(std::unique_ptr<Command_output_base>&& command)
{

    //odpalam parser
}

void Main_manager::run()
{
    while (!this->done_flag_.load()) {
        run_command_receiver();
    }
}
