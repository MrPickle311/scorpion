#include "Converter.hpp"
#include <iostream>

template<class Input_type, class Output_type>
Output_type Converter_base<Input_type,Output_type>::operator()(const Input_type & input, std::function<Output_type (Input_type)> conv_func)
{
    try {
        return Output_type{conv_func(input)};
    } catch (const std::exception& e) {
         std::cout << e.what() << std::endl;
    }
}
