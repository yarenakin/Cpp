#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include <sstream>
#include <time.h>

enum  class LogLevel { TRACE, DEBUG, INFO, WARN, ERROR };
#define LOG_DEBUG( msg ) Logger::log(LogLevel::DEBUG, msg, __LINE__, __FILE__, __FUNCTION__ )

class Logger
{
public:
    Logger();
    static void log(LogLevel level, const std::string &message,int line,const char* file, const char* function);
    static std::string logFileName;
    static bool print;
    static bool save;
    static std::string version;
    
};

