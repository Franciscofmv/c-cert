#include <iostream>
#include "meeting.h"
using std::cout;
using std::endl;

    // Constructors:

Meeting::Meeting(string loc, string prson, int mm, int dd, int yr, int hr, int mn){
    location = loc;
    person = prson;
    month = mm;
    
    day = dd;
    year = yr;
    hour = hr;
    minutes = mn;
}

    // Compare by Insert key:
int compResult(unsigned int& left,unsigned int& right){ 
    return (left < right) ? -1: (left > right) ? 1:0 ; 
}
int Meeting::CompareByInsertKey( ListItem* item_in_list )
{   unsigned int l=2;
    unsigned int r=3;
    int result=0;
        // Compare year:
    l = this->year;
    r = ((Meeting *)item_in_list)->year;
    result = compResult(l, r);
    if (result != 0)
        return result;

        // Compare month if year is the same:
    l = this->month;
    r = ((Meeting *)item_in_list)->month;
    result = compResult(l, r);
    if (result != 0)
        return result;

        // Compare day if month and year is the same:
    l = this->day;
    r = ((Meeting *)item_in_list)->day;
    result = compResult(l, r);
    if (result != 0)
        return result;

        // If mm/dd/yy is the same, compare the hour:
    l = this->hour;
    r = ((Meeting *)item_in_list)->hour;
    result = compResult(l, r);
    if (result != 0)
        return result;

        // If hour is the same, compare minutes:
    l = this->minutes;
    r = ((Meeting *)item_in_list)->minutes;
    result = compResult(l, r);
    return result;  
} 
    // Print:
void Meeting::print(){
    cout << "*** Meeting info: " << endl;
    cout << "   Location: " << this->location << endl;
    cout << "   Meeting with: " << this->person << endl;
    cout << "   Date (month-day-year): " 
        << this->month << "-" 
        << this->day << "-" 
        << this->year << endl;
    cout << "   Time (24hr format hrs:mn): " << this->hour << ":" << this->minutes << endl;

}
    //Clone
ListItem* Meeting::Clone()
{
   Meeting *p;

   p = new Meeting(location, person, month, day, year, hour, minutes);
   return (ListItem *) p;
}