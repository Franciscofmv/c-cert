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
    public:
        Meeting(string loc, string prson, int& mm, int& dd, int& yr, int& hr, int& mn);
        virtual int CompareByInsertKey( ListItem* item_in_list );
        virtual void print();
        virtual ListItem* Clone();
};

#endif