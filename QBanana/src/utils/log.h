#ifndef LOG_H
#define LOG_H

#define IS_LOG


#include <iostream>
#include <time.h>
#include <stdarg.h>
#include <stdio.h>
#include <memory.h>

#ifdef IS_LOG

#define LOG(format, ...)
#define LOG_INFO(args...) Log::Log_base("INFO", __FILE__, __LINE__, ##args)


#define DEBUG(level, format,...) printf("[%d][%s][line:%d][%s--%s]"format, level, __FILE__, __LINE__,__DATE__, __TIME__, ##__VA_ARGS__)
#else

#define LOG_BASE(mnt, ...)

#endif

class Log
{
public:
    Log();
    static void Log_base(const char* level, const char* file, const int lineNo, const char* args...);
    ~Log();
private:
    static char* _debug_get_full_time_string();
    static void _debug_print_current_time();
    static void _args_handle(char* args...);
};

#endif // LOG_H
