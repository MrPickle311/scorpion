#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <functional>
#include <exception>

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
    virtual Output_type operator() (const Input_type&,std::function<Output_type(Input_type)>);
};

template<class Input_type,class Output_type> class Converter_default : public Converter_base<Input_type,Output_type>
{
    // Converter_base interface
};


///

#endif // CONVERTER_HPP
