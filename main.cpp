#include <iostream>
#include "Executer.hpp"
#include "Main_command.hpp"

int main(int argc, char **argv)
{
    Main_executer exec{};
    exec.run();
    Main_command g{};
    std::cout << g.load();
    return 0;
}


