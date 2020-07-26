#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <functional>
#include <exception>
#include <string>
/// klasy konwertera

template <class Input_type,class Output_type> class Converter_out_base
{

};

template<class Input_type,class Output_type> class Converter_in_base
{

};

template<class Input_type,class Output_type> class Converter_base: public Converter_in_base<Input_type,Output_type>,
        public Converter_out_base<Input_type,Output_type>
{
public:
    virtual Output_type operator() (const Input_type&,std::function<Output_type(Input_type)>);
};

template<class Input_type,class Output_type> class Default_converter : public Converter_base<Input_type,Output_type>
{
    // Converter_base interface
};

template<>
class Default_converter<std::string,size_t>
{
public:
    size_t operator() (const std::string& str,std::function<size_t(std::string str)>
                              conv_func = [&](const std::string& str){return  1;});
};

///

#endif // CONVERTER_HPP
