#include "Logger.h"
#include <cstdio>

#pragma warning(disable : 4996)

#define YearBase 1900
#define MonBase 1

bool Logger::save = true;
bool Logger::print = true;
std::string Logger::logFileName = "test_macro.txt";
std::string Logger::version = "1.0.0";
Logger::Logger()
{

}

void Logger::log(LogLevel level, const std::string &message,int line,const char* file, const char* function)
{  
    //date time 
    time_t cuT;
    struct tm* loT;
    time(&cuT);
    loT = localtime(&cuT);

    //Log levels
    std::string leveltype;
    if (static_cast<int>(level) == 0)      leveltype = "[TRACE]";
    else if (static_cast<int>(level) == 1) leveltype = "[DEBUG]";
    else if (static_cast<int>(level) == 2) leveltype = "[INFO]";
    else if (static_cast<int>(level) == 3) leveltype = "[WARN]";
    else if (static_cast<int>(level) == 4) leveltype = "[ERROR]";

    //write to ss (log file)
    std::stringstream ss;
    ss << "VER:" << version << " ";
    ss << leveltype << " ";
    ss << std::setw(2) << loT->tm_mday << '/'; 
    ss << std::setw(2) << std::setfill('0') << loT->tm_mon + MonBase << '/';
    ss << loT->tm_year + YearBase << ' ';
    ss << std::setw(2) << std::setfill('0') << loT->tm_hour << ':';
    ss << std::setw(2) << std::setfill('0') << loT->tm_min << ':';
    ss << std::setw(2) << std::setfill('0') << loT->tm_sec << ' ';
    ss << file << " [";
    ss << function << "]:";
    ss << line << " | ";
    ss << message << "\n";

    if (save) {
        std::ofstream of;
        of.open(logFileName, std::ios_base::app | std::ios::out);
        of << ss.rdbuf();
    }
    if (print) {
        std::cout << ss.str();
    }
}

