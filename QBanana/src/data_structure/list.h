#ifndef LIST_H
#define LIST_H

#include <malloc.h>

class List
{
public:
    List();
    ~List();
    unsigned int getSize();
    bool addItem(int content);
    bool addItemAtIndex(unsigned int index, int content);
    bool reduceItem();
    bool deleteItemWithContent(int content);
    bool deleteItemAtIndex(unsigned int index);
    unsigned int getIndexWithContent(int content);
    bool cleanAll();
    bool turnOver();

private:
    struct ListItem {
        unsigned int index;
        struct ListItem *nextItem;
        struct ListItem *preItem;
        int content;
    };
    struct ListItem *head;
    struct ListItem *tail;
    struct ListItem *curr;
    unsigned int listCount;

    struct List::ListItem* creatItem();

    void creatHead(struct ListItem *tmp, int content);
    void notifyData();
};

#endif // LIST_H
