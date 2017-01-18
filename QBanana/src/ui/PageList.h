#ifndef PAGELIST_H
#define PAGELIST_H

#include <QPushButton>

class PageList
{
public:
    PageList();
    ~PageList();

private:
    QPushButton addItemBtn;
    QPushButton decreaseItemBtn;
    QPushButton clearAllBtn;
    QPushButton turnoverBtn;

};

#endif // PAGELIST_H
