#include "Logger.h"

Logger::Logger(const std::string &filename) {
    logFile.open(filename, std::ios::app);
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void Logger::log(const std::string &message) {
    if (logFile.is_open()) {
        logFile << message << std::endl;
    }
}








