#include "MainProgram.hpp"


std::string MainProgram::delete_white_chars(const std::string& _s)
{
    std::string rs{_s};
    rs.erase(std::remove_if(rs.begin(),rs.end(),[](const char& c){return isspace(c);}),rs.end());
    return rs;
}

void MainProgram::get_input()
{
    std::getline(std::cin, _command);
    _command = delete_white_chars(_command);
    _old_commands.push_back(_command);
    //TUTAJ WYSYŁAMY KOMENDĘ DO PARSERA
    _command.clear();
}

void MainProgram::print_output()
{

}

void MainProgram::print_curr_path()
{
    std::cout << _current_path.c_str() << "# " ;
}

MainProgram::MainProgram(): _command{} ,_current_path{std::filesystem::current_path()},_old_commands{}
{

}

void MainProgram::run()
{
     for(;;)
     {
         print_curr_path();
         get_input();
         print_output();
     }
}
