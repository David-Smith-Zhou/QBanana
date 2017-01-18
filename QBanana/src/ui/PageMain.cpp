#include "PageMain.h"

PageMain::PageMain()
{
    setGeometry (400, 400, 400, 400);
    listBtn = new QPushButton("链表测试页", 0);
    testBtn = new QPushButton("测试按钮", 0);
    connect (listBtn, SIGNAL(clicked()), this, SLOT(slotOnMainPageBtnClicked()));
    connect (testBtn, SIGNAL(clicked()), this, SLOT(slotOnMainPageBtnClicked()));
    connect (this, SIGNAL(signlaBtnCLicked(int)), this, SLOT(slotOnMainPageBtnClicked(int)));
    parentLayout = new QBoxLayout(QBoxLayout::TopToBottom, 0);


    parentLayout->addWidget (listBtn);
    parentLayout->addWidget (testBtn);

    this->setLayout (parentLayout);
    count = 0;
}

void PageMain::slotOnMainPageBtnClicked () {
    QPushButton *btn = dynamic_cast<QPushButton*>(sender ());


    if (listBtn == btn) {
        LOG_DEBUG ("get listBtn clicked");
    }



    emit signlaBtnCLicked (count);
}

void PageMain::slotOnMainPageBtnClicked (int btn_type) {
    LOG_INFO("Get btn_type: %d", btn_type);
    count++;
}

void PageMain::changePage () {

}


PageMain::~PageMain()
{

}

