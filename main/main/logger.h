#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include <sstream>
#include <time.h>

enum  class LogLevel { TRACE, DEBUG, INFO, WARN, ERROR };
#define LOG_DEBUG( lvl,msg ) Logger::log( lvl, msg, __FILE__, __FUNCTION__, __LINE__ )

class Logger
{
public:
    Logger();
    static void log(LogLevel level, const std::string &message,const char* file,const char* function,int line);
    static std::string logFileName;
    static bool print;
    static bool save;
    static std::string version;

};

#endif // LOGGER_H
