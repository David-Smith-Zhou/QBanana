#include "PageList.h"
#include "../utils/log.h"
PageList::PageList()
{
      this->setGeometry (50, 50, SCREEN_WIDTH_SIZE, SCREEN_HEIGHT_SIZE);
      addItemBtn = new QPushButton("添加项目", nullptr);
      decreaseItemBtn = new QPushButton("减少项目", nullptr);
      clearAllBtn = new QPushButton("清除全部", nullptr);
      turnOverBtn = new QPushButton("翻转链表", nullptr);
      parentLayout = new QBoxLayout(QBoxLayout::TopToBottom, nullptr);
      this->connect(addItemBtn, SIGNAL(clicked()), this, SLOT(slotOnBtnClicked()));
      this->connect(decreaseItemBtn, SIGNAL(clicked()), this, SLOT(slotOnBtnClicked()));
      this->connect(clearAllBtn, SIGNAL(clicked()), this, SLOT(slotOnBtnClicked()));
      this->connect(turnOverBtn, SIGNAL(clicked()), this, SLOT(slotOnBtnClicked()));

      parentLayout->addWidget(addItemBtn);
      parentLayout->addWidget(decreaseItemBtn);
      parentLayout->addWidget(clearAllBtn);
      parentLayout->addWidget(turnOverBtn);

      this->setLayout(parentLayout);
     // list;
}

PageList::~PageList()
{

}
void PageList::slotOnBtnClicked() {
    QPushButton *btn = dynamic_cast<QPushButton*>(sender ());
    if (btn == addItemBtn) {
        LOG_INFO("addItemBtn");
        list.addItem();
    } else if (btn == decreaseItemBtn) {
        LOG_INFO("decreaseItemBtn");
        list.reduceItem();
    } else if (btn == clearAllBtn) {
        LOG_INFO("clearAllBtn");
        list.cleanAll();
    } else if (btn == turnOverBtn) {
        LOG_INFO("turnOverBtn");
        list.turnOver();
    } else {
        LOG_ERROR("unknown btn!!!!");
    }
}

void PageList::slotOnBtnClicked(int btnType) {

}
