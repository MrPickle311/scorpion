#ifndef COMMAND_BASE_INTERFACES_HPP
#define COMMAND_BASE_INTERFACES_HPP

#include <memory>
#include <string>

template<class StorageType>
class Command_input_base
{
public:
    virtual ~Command_input_base() = default;
public:
    virtual void store(const StorageType&) = 0;

};

template<class StorageType>
class Command_output_base
{
protected:

public:
    virtual ~Command_output_base() = default;
public:
    virtual StorageType load() const = 0;

};




#endif // COMMAND_BASE_INTERFACES_HPP
