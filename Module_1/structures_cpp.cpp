#include <iostream>
#include <string.h>


struct date{
    int day;
    int month;
    int year;
};

struct employee{
    char name[40];
    char ssn[9];
    struct date date_of_birth;

};

int main(){
    date today = {22, 3, 2025};
    
    std::cout<<today.day<<"/"<<today.month<<"/"<<today.year<<std::endl;

    employee me;
    me.date_of_birth = today;
    strcpy(me.ssn,"123456789");
    strcpy(me.name,"Francisco");

    // Pointers to structures:
    employee *emp = &me;
    (*emp).date_of_birth.day = 11;
    std::cout<<(*emp).date_of_birth.year<<std::endl;
    emp -> date_of_birth.day = 9;
    return 0;
}