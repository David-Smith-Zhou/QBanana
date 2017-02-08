#include "log.h"

Log::Log()
{
    LOG_INFO("log initlization");
}

Log::~Log()
{

}

void Log::Log_base(const char* level, const char* file, const int lineNo, const char* args...) {

    char content[0xFFFF];
    // if head buff is not big enough, the file path part of log message
    // will been cutten
    char head[0xFF];
    sprintf (head, "[%s][%s][line:%d]", level, file, lineNo);

//    printf ("%s", head);

    char now_time[90];
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
    sprintf(now_time, "[%04d-%02d-%02d %02d:%02d:%02d.%03d]", temp_ts.tm_year + 1900, temp_ts.tm_mon + 1, temp_ts.tm_mday, temp_ts.tm_hour, temp_ts.tm_min, temp_ts.tm_sec, tb.millitm);



    va_list ap;

    char str_buff[0xFFFF];
    va_start(ap, args);
    vsnprintf (str_buff, 0xFFFF, args, ap);

    sprintf (content, "%s%s%s", head, now_time, str_buff);

#ifdef PLATFROM_LINUX
    printf ("%s\n", content);
#endif

#ifdef PLATFROM_WINDOWS
    std::cout << content << std::endl;
#endif
//    fprintf(stdout, args, ap);
    va_end(ap);


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




