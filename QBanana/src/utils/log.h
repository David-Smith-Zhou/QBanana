#ifndef LOG_H
#define LOG_H

#define IS_LOG


#include <iostream>
#include <time.h>
#include <stdarg.h>
#include <stdio.h>


#ifdef IS_LOG

#define LOG(format, ...)
#define LOG_INFO(args...) Log::Log_base("INFO", __FILE__, __LINE__, ##args)
#else

#define LOG_BASE(mnt, ...)

#endif

class Log
{
public:
    Log();
    static void Log_base(char* level, char* file, int lineNo, char* args...);
    ~Log();
private:
    static char* _debug_get_full_time_string();
    static void _debug_print_current_time();
    static void _args_handle(char* args...);
};

#endif // LOG_H
