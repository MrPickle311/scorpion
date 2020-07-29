#ifndef ERROR_BASE_HPP
#define ERROR_BASE_HPP

#include <string>
#include <exception>

//////////////////////////////////////
class Exception_base : public std::exception
{ 
public:
    Exception_base();
    virtual const char* what() const  throw() ;
};
//////////////////////////////////////

//////////////////////////////////////
class MainProgram_Exception : public Exception_base
{
public:
    MainProgram_Exception();
    // Error_base interface

    virtual const char* what() const throw();
};

class MainParser_Exception : public MainProgram_Exception
{
private:
    std::string _msg;
public:
    MainParser_Exception(std::string);
    // MainProgram_Exception interface

    virtual const char* what() const throw();
};
/////////////////////////////////////

#endif // ERROR_BASE_HPP
