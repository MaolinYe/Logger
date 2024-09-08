#include "logger.h"

int main() {
    Logger::InitLogger("logfile.log");
    LOG(LogLevel::DEBUG, "This is a debug message");
    LOG(LogLevel::INFO, "This is an info message");
    LOG(LogLevel::WARN, "This is a warning message");
    LOG(LogLevel::ERROR, "This is an error message");
    LOG(LogLevel::FATAL, "This is a fatal message");
    return 0;
}
