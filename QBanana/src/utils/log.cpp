#include "log.h"

Log::Log()
{

}

Log::~Log()
{

}

void Log::Log_base(char* level, char* file, int lineNo, char* args...) {
    printf("[%s][%s][line:%d]", level, file, lineNo);
    _debug_print_current_time ();
    LOG (args);
    printf("\n");
    return;
}
char* Log::_debug_get_full_time_string () {
    time_t now;
    now = time(NULL);
    char* char_time = ctime(&now);
    return char_time;
}

void Log::_debug_print_current_time() {
    time_t now = time(NULL);
    struct tm temp_ts;
    struct tm * point_ts;
    //
    //	point_ts = gmtime(&now);
    //	格林威治时间
    point_ts = localtime(&now);
    temp_ts = *point_ts;
    struct timeb tb;
    ftime(&tb);
//    printf(".%03d",);
    //
    printf("[%04d-%02d-%02d %02d:%02d:%02d.%03d]", temp_ts.tm_year + 1900, temp_ts.tm_mon + 1, temp_ts.tm_mday, temp_ts.tm_hour, temp_ts.tm_min, temp_ts.tm_sec, tb.millitm);
    return;
}

void Log::_args_handle (char *args...) {
    va_list ap;
    int d;
    char c, *p, *s;
    char str_buff[1024];
    va_start(ap, args);
    vsprintf (str_buff, args, ap);

    printf(args);
    fprintf(stdout, args, ap);
    va_end(ap);
}
