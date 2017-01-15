#ifndef PAGEMAIN_H
#define PAGEMAIN_H

#include <QWidget>
#include <QPushButton>
#include <QBoxLayout>
#include <QTextEdit>
#include "../utils/log.h"

enum BTN_TYPE {
    BTN_TYPE_LIST,
};

class PageMain :public QWidget
{
    Q_OBJECT
public:
    PageMain();
    ~PageMain();
public slots:
    void slotOnMainPageBtnClicked();
    void slotOnMainPageBtnClicked(int btnType);
private:
    QPushButton *listBtn;
    QBoxLayout *parentLayout;
    int count;
signals:
    void signlaBtnCLicked(int btnType);
};

#endif // PAGEMAIN_H
