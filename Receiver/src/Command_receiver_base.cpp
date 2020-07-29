#include "Command_receiver_base.hpp"

std::string Command_receiver_base::getline_loop(std::function<bool (std::string Expected_value)> predicate)
{
    std::string str{};
    while (predicate(str)) {
        str.clear();
        std::getline(std::cin,str);
    }
    return str;
}

