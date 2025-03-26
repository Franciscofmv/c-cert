#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date{
    int year;
    int month;
    int day;
};

struct employee{
    char name[40];
    char ssn[9];
    struct date date_of_birth;
};




int main(){
    struct date today;
    today.year = 2025;
    today.month = 3;
    today.day = 22;
    
    // Initializing in declaration:
    struct date tomorrow = {2025, 3, 23};
    printf("%i/%i/%i\n", today.day, today.month, today.year);
    struct employee me;
    me.date_of_birth.year = 1;
    strcpy(me.name, "Francisco");

    return 0;
}