#include "./ui/mainwindow.h"
#include <QApplication>
#include "./utils/log.h"
#include "./ui/PageMain.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    PageMain *pageMain = new PageMain();
    pageMain->show ();
    return a.exec();
}
