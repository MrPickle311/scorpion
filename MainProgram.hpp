#ifndef MAINPROGRAM_HPP
#define MAINPROGRAM_HPP

#include <string>
#include <iostream>
#include <regex>
#include <algorithm>
#include <cctype>
#include <filesystem>
#include <list>
//#include "RuntimeSyntaxAnalizer.hpp"
#include <future>
#include <atomic>

// dodaj obsługę skryptów
// dodać do prgoramu głównego możliwość odroczenia akcji w czasie
// akcje dodawać do wątków
// .*{.*}(->tryb{.*})? ,
// tryby {natychmiast,odroczenie w czasie,czekanie na spełnienie warunku}
// możliwość stworzenia migawki i przywrócenia wcześniejszej strutury katalogów
// wykorzystaj notify_one() lub all
// a może tak? -> polecenie {parametry polecenia}
// polecenia: program , go
// utworzyć klasę program manager do uruchamiania i zarządzania programami
// polecenie go będzie ustawiać po prostu  obecny katalog np. go /home/damiano , go C:/Users/Damiano
// ogarnąć buildera
//MainProgram::MainParser::Program_type MainProgram::MainParser::get_program_type(std::string command)
//{
//    std::smatch result;
//    if(!std::regex_search(command.cbegin(),command.cend(),result,_main_syntax))
//        return MainProgram::MainParser::Program_type::program_NOT_FOUND;
//    std::string program{result.str(1)};
//    std::cout << "TEST " << result.str(0) << std::endl;
//    std::cout << "TEST " << result.str(1) << std::endl;
//    std::cout << "TEST " << result.str(2) << std::endl;
//    std::cout << "TEST " << result.str(3) << std::endl;
//    if(program == "creator")               return MainProgram::MainParser::Program_type::creator;
//    else if (program == "shredder")        return MainProgram::MainParser::Program_type::shredder;
//    else if (program == "copier")          return MainProgram::MainParser::Program_type::copier;
//    else if (program == "exchanger")       return MainProgram::MainParser::Program_type::exchanger;
//    else if (program == "reserver")        return MainProgram::MainParser::Program_type::reserver;
//    else if (program == "transporter")     return MainProgram::MainParser::Program_type::transporter;
//    else if (program == "csv_manipulator") return MainProgram::MainParser::Program_type::csv_manipulator;
//    return MainProgram::MainParser::Program_type::program_NOT_FOUND;
//}

enum class Program_type{program_NOT_FOUND,creator,shredder,copier,exchanger,reserver,transporter,csv_manipulator};
enum class What{nothing = 0,msg_from_parser = 1};
//rs.erase(std::remove_if(rs.begin(),rs.end(),[](const char& c){return isspace(c);}),rs.end());


#endif // MAINPROGRAM_HPP
