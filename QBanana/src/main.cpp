#include "./ui/mainwindow.h"
#include <QApplication>

#include <sys/timeb.h>
#include "./utils/log.h"
int main(int argc, char *argv[])
{
    int i = 1111;
    int *p = &i;
    char *str = "hello world!\n";

    LOG_INFO ("===================================\n");

    LOG_DEBUG ("int %d\n", i);
    LOG_WARNNING ("pointer %p\n", p);
    LOG_ERROR ("string %s", str);

    LOG_INFO ("===================================\n");


    QApplication a(argc, argv);
    MainWindow w;
    w.show();



//    std::cout << "456" << std::endl;
    return a.exec();
}
