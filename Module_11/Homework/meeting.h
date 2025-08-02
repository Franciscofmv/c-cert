#include <iostream>
#include "linklist.h"
using std::string;
#ifndef MEETING_H_
#define MEETING_H_
class Date;

class Meeting : public ListItem{
    protected:
        string location;
        int month;
        int day;
        int year;
        int hour;
        int minutes;
        string person;
        friend int CompareDateTime( ListItem*  item_in_list, void* search_key );
    public:
        Meeting(string loc, string prson, int mm, int dd, int yr, int hr, int mn);
        virtual int CompareByInsertKey( ListItem* item_in_list );
        virtual ListItem* Clone();
        void print();
};

#endif