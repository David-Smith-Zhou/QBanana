#ifndef LOG_H
#define LOG_H

// 调试信息开关
#define IS_LOG
#define PLATFROM_WINDOWS
//#define PLATFROM_LINUX

#include <iostream>
#include <time.h>
#include <stdarg.h>
#include <stdio.h>
#include <memory.h>

#ifdef IS_LOG

#define LOG_INFO(args...)       Log::Log_base("INFO", __FILE__, __LINE__, ##args)
#define LOG_WARNNING(args...)   Log::Log_base("WARNNING", __FILE__, __LINE__, ##args)
#define LOG_DEBUG(args...)      Log::Log_base("DEBUG", __FILE__, __LINE__, ##args)
#define LOG_ERROR(args...)      Log::Log_base("ERROR", __FILE__, __LINE__, ##args)


#else

#define LOG_INFO(args...)
#define LOG_WARNNING(args...)
#define LOG_DEBUG(args...)
#define LOG_ERROR(args...)

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
