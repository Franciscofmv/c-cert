#include <iostream>

#ifndef LINKEDLIST_H_ 
#define LINKEDLIST_H_

class ListItem;
class ListItemIterator;
typedef int (*COMPARATOR)(ListItem* item_in_list, void* search_key);
class List{

    friend class ListIterator;
    friend class ListItem;
    public:
            // Define constructor:
        List(){head=tail=NULL;}
            // Insert new item:
        void Insert(ListItem* new_item);
        ListItem* Find( void *search_item_key, COMPARATOR c);
    private:
        ListItem* head;
        ListItem* tail;
        int inserted;
        unsigned long generation;


};

#endif