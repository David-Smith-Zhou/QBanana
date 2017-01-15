#include "PageMain.h"

PageMain::PageMain()
{
    setGeometry (400, 400, 400, 400);
    listBtn = new QPushButton("链表测试页", 0);
    connect (listBtn, SIGNAL(clicked()), this, SLOT(slotOnMainPageBtnClicked()));
    connect (this, SIGNAL(signlaBtnCLicked(int)), this, SLOT(slotOnMainPageBtnClicked(int)));
    parentLayout = new QBoxLayout(QBoxLayout::TopToBottom, 0);
    parentLayout->addWidget (listBtn);


    this->setLayout (parentLayout);
    count = 0;
}

void PageMain::slotOnMainPageBtnClicked () {
    LOG_INFO("count: %d", count);
//    std::cout << "我被点了我被点了" << std::endl;
    emit signlaBtnCLicked (count);
}

void PageMain::slotOnMainPageBtnClicked (int btn_type) {
    LOG_INFO("Get btn_type: %d", btn_type);
    count++;
}



PageMain::~PageMain()
{

}

