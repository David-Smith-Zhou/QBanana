#include "./ui/mainwindow.h"
#include <QApplication>
#include "./utils/log.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int i = 1111;
    int *p = &i;
    char *str = "hello world!\n";

    LOG_INFO ("===================================\n");

    LOG_DEBUG ("int %05d\n", i);
    LOG_WARNNING ("pointer %p\n", p);
    LOG_ERROR ("string %s", str);

    LOG_INFO ("===================================\n");




//    std::cout << "456" << std::endl;
    return a.exec();
}
