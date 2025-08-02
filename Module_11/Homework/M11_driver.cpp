#include <iostream>
#include "meeting.h"


#include      <iostream>  
#include      <string.h>
#include      "linklist.h"
using std::cout;
using std::endl;
using std::cerr;

int CompareDateTime( ListItem*  item_in_list, void* search_key );
int main(void)
{
Meeting        *m, *m1,*m2,*m3,*m4,*m5,*m6,*m7;
List           l;
ListIterator  *iter; 
unsigned long  ssn;
List          *cloned_list;

    // Interview sessions:
m1 = new Meeting("Orlando, FL", "Kmetz, Rhonda",9,15,2025, 12, 0);
l.Insert(m1);
m2 = new Meeting("Zoom", "Jones, Tom", 9, 15, 2025, 11, 0);
l.Insert(m2); 
m3 = new Meeting("Zoom", "Phillips, Bob", 9, 15, 2025, 8,0);
l.Insert(m3);
m4 = new Meeting("Orlando, FL", "Adams, Don", 9, 16, 2025, 16, 30);
l.Insert(m4);
m5 = new Meeting("Teams", "Zwakenberg, Rich", 9, 16, 2025, 15, 30);
l.Insert(m5);
m6 = new Meeting("Orlando, FL", "Blair, Gary", 9, 16, 2025, 13, 0);
l.Insert(m6);
m7 = new Meeting("Orlando, FL", "Johnson, Bill", 9, 15, 2025, 15, 30);
l.Insert(m7);

iter = new ListIterator(l);
while (m=(Meeting *)(iter->NextItemInList()))
    m->print();
delete iter;

cloned_list = l.Clone();
cout << "The cloned list:\n";
iter = new ListIterator(*cloned_list);
while (m=(Meeting *)(iter->NextItemInList()))
    m->print();
delete iter;

// l.Delete(p2);
// p4->Delete();
// ssn = 888777666;
// l.Delete(&ssn, CompareSSN); 

// cout<<"\nAfter deleting Jones, Adams, and Zwakenbergthe list is\n\n";
// iter = new ListIterator(l);
// while (p=(Meeting *)(iter->NextItemInList()))
//     p->print();
// delete iter; 
// ssn = 889922336;
// p = (Meeting *)(l.Find(&ssn,CompareSSN));
// cout
// << "\nResult of searching for SSN 889922336 is"
// << endl;
// p->print();
}

int compareResult(unsigned int& left, unsigned int& right){
   if (left < right){
        return -1;
   }
   else if (left > right){
        return 1;
   }
   else{
    return 0;
   }
}

int CompareDateTime( ListItem*  item_in_list, void* search_key )
{       // Compare year:
   unsigned int left = ((Meeting *)item_in_list)->year;
   unsigned int right = *((unsigned long *) search_key);
   int result=2;
   result = compareResult(left, right);
   if (result != 0){
    return result;
   }
        // Compare month:
    left = ((Meeting *)item_in_list)->year;
    right = *((unsigned long *) search_key);
    

   return (left < right) ? -1 : (left > right) ?  1 :0 ; 
}