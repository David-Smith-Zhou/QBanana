#include "list.h"
#include "../utils/log.h"

List::List() {
    LOG_INFO("list initlization");
    listCount = 0;
    this->head = nullptr;
    this->tail = nullptr;
    this->curr = nullptr;
    notifyData();
}


List::~List() {

}

unsigned int List::getSize() {
    return listCount;
}

bool List::addItem(int content) {
    bool rst = false;
    struct ListItem *tmp = creatItem();
    if (0 == getSize()) {
        if (tmp == nullptr) {
            LOG_ERROR("malloc error while addItem");
            rst = false;
        } else {
            creatHead(tmp, content);
            rst = true;
        }
    } else {
        // add item with index
        tail->nextItem = tmp;
        tmp->preItem = tail;
        tmp->content = content;
        tmp->index = listCount;
        listCount++;

    }

    notifyData();
    return rst;
}

bool List::addItemAtIndex(unsigned int index, int content) {
    bool rst = false;


    notifyData();
    return rst;
}

bool List::reduceItem() {
    bool rst = false;


    notifyData();
    return rst;
}

bool List::deleteItemAtIndex(unsigned int index) {
    bool rst = false;
    notifyData();
    return rst;
}

unsigned int List::getIndexWithContent(int content) {
    bool rst = false;
    notifyData();
    return rst;
}

bool List::cleanAll() {
    bool rst = false;
    notifyData();
    return rst;

}

bool List::turnOver() {
    bool rst = false;
    notifyData();
    return rst;

}


struct List::ListItem* List::creatItem() {
    LOG_INFO("creat item");
    struct List::ListItem *ptr = (List::ListItem *) malloc(sizeof(List::ListItem));
    notifyData();
    return ptr;
}
void List::creatHead(ListItem *tmp, int content) {
    head = tmp;
    tail = tmp;
    listCount = 1;
    tmp->content = content;
    tmp->index = 0;
    tmp->preItem = tmp;
    tmp->nextItem = nullptr;
}

void List::notifyData() {
    LOG_INFO("list size = %d", getSize());
    LOG_INFO("list head = %p", this->head);
    LOG_INFO("list tail = %p", this->tail);
}
