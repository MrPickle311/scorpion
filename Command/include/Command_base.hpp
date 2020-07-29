#ifndef COMMAND_BASE_HPP
#define COMMAND_BASE_HPP
#include "Command_base_interfaces.hpp"

template<class StorageType>
class Command_base: public Command_input_base<StorageType>,
                    public Command_output_base<StorageType>
{
protected:
    Command_base(): command_{"a"}
    {

    }
    Command_base(StorageType&&)
    {

    }
protected:
    StorageType command_;
public:
    virtual ~Command_base() = default;
};

#endif // COMMAND_BASE_HPP
