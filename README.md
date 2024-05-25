# Logger
C++实现的日志类，记录日志写入时的时间，可选的日志级别（DEBUG / INFO / WARN / ERROR / FATAL），日志内容，日志写入时的代码文件，代码行号和函数名
## 单例模式
我们更希望使用这样的日志记录方式
```c++
LOG(LogLevel::FATAL, "This is a fatal message");
```
而不是这样的
```c++
LOG(logger, LogLevel::FATAL, "This is a fatal message");
```
这意味着我们需要实现一个单例模式的日志，具体来说，需要将类实例静态化，由一个静态函数返回类实例的引用，由于静态变量只会初始化一次，所以每次返回的都是同一个实例  
同时我们希望能够保留可以更改类实例初始化的参数，例如日志文件名，因此需要一个初始化的静态函数来进行类实例的初始化
### 使用
```c++
#include "logger.h"

int main() {
    Logger::InitLogger("logfile.txt");
    LOG(LogLevel::DEBUG, "This is a debug message");
    LOG(LogLevel::INFO, "This is an info message");
    LOG(LogLevel::WARN, "This is a warning message");
    LOG(LogLevel::ERROR, "This is an error message");
    LOG(LogLevel::FATAL, "This is a fatal message");
    return 0;
}
```