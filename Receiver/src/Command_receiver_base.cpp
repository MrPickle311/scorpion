#include "Command_receiver_base.hpp"

/// Main_receiver
std::string Main_receiver::get() const
{
}

void Main_receiver::load(const std::string &)
{
}

std::string Main_receiver::get_command_from_user()
{
}

std::unique_ptr<Command_base> Main_receiver::run()
{

}

/// Main_receiver


///Command_receiver_base

template<class T>
T Command_receiver_base::getline_loop(std::function<bool (T Expected_value)> predicate,
                                      std::unique_ptr<Converter_base<std::string, T>> conversion_func)
{
    T value{};
    std::string str{};
    while (predicate(value)) {
        str.clear();
        std::getline(std::cin,str);
        value = conversion_func(str);
    }
    return value;
}

///Command_receiver_base


