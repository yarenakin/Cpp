#include "logger.h"
#include "VersionConfig.h"

#define YearBase 1900
#define MonBase 1

bool Logger::save = true;
bool Logger::print = true;
std::string Logger::logFileName = "log.txt";

Logger::Logger()
{

}
void Logger::log(LogLevel level, const std::string &message,const char* file,const char* function,int line)
{
    //date time
    time_t cuT;
    struct tm* loT;
    time(&cuT);
    loT = localtime(&cuT);

    //Log levels
    std::string levelType;
    if (static_cast<int>(level) == 0)      levelType = "[TRACE]";
    else if (static_cast<int>(level) == 1) levelType = "[DEBUG]";
    else if (static_cast<int>(level) == 2) levelType = "[INFO]";
    else if (static_cast<int>(level) == 3) levelType = "[WARN]";
    else if (static_cast<int>(level) == 4) levelType = "[ERROR]";

    //write to ss (log file)
    std::stringstream ss;
    ss << "VER:" << PROJECT_VER << " ";
    ss << levelType << " ";
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
