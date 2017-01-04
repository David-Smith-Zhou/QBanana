#include "./ui/mainwindow.h"
#include <QApplication>

#include <sys/timeb.h>
#include "./utils/log.h"
int main(int argc, char *argv[])
{
    int i = 1111;
    LOG_INFO("-%d-", i);
    printf("=%d=", i);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



//    std::cout << "456" << std::endl;
    return a.exec();
}
