#include "./ui/mainwindow.h"
#include <QApplication>
#include "./utils/log.h"
#include "./ui/PageMain.h"
#include "./ui/PageList.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

//    PageMain *pageMain = new PageMain();
//    pageMain->show ();

    PageList *pageList = new PageList();
    pageList->show();
    return a.exec();
}
