#ifndef PAGEMAIN_H
#define PAGEMAIN_H

#include <QWidget>
#include <QPushButton>

class PageMain :public QWidget
{
    Q_OBJECT
public:
    PageMain();
    ~PageMain();
public slots:
    void onMainPageBtnClicked();
private:
    QPushButton *listBtn;
signals:
    void btnClicked(int btnType);
};

#endif // PAGEMAIN_H
