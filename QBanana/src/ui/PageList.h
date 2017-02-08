#ifndef PAGELIST_H
#define PAGELIST_H

#include <QPushButton>
#include <QBoxLayout>
#include <QWidget>
#include "uiconst.h"
#include "../data_structure/list.h"

class PageList : public QWidget
{
    Q_OBJECT
public:
    PageList();
    ~PageList();


public slots:
    void slotOnBtnClicked();
    void slotOnBtnClicked(int btnType);

signals:
    void signalBtnClicked(int btnType);

private:
    QPushButton *addItemBtn;
    QPushButton *decreaseItemBtn;
    QPushButton *clearAllBtn;
    QPushButton *turnOverBtn;
    QBoxLayout *parentLayout;
    List list;
};

#endif // PAGELIST_H
