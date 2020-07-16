#ifndef MAINPROGRAM_HPP
#define MAINPROGRAM_HPP

#include <string>
#include <iostream>
#include <regex>
#include <algorithm>
#include <cctype>
#include <filesystem>
#include <list>

class MainProgram
{
private:
    std::string _command;
    std::filesystem::path _current_path;
    std::list<std::string> _old_commands;
private:
    std::string delete_white_chars(const std::string& _s);
    void get_input();
    void print_output();
    void print_curr_path();
public:
    MainProgram();
    void run();
};

#endif // MAINPROGRAM_HPP
