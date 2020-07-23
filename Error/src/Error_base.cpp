#include "Error_base.hpp"

Exception_base::Exception_base(): std::exception{}
{}

const char* Exception_base::what() const throw()
{
    return "Error :";
}

MainProgram_Exception::MainProgram_Exception(): Exception_base{}
{

}

const char* MainProgram_Exception::what() const throw()
{
    return " MainProgram_Error:";
}


MainParser_Exception::MainParser_Exception(std::string msg): _msg{msg}
{

}

const char *MainParser_Exception::what() const throw()
{
     std::string msg{""};
     msg += this->Exception_base::what();
     msg += this->MainProgram_Exception::what();
     msg += " MainParser_Error:";
     msg += this->_msg;
     return msg.c_str();
}
