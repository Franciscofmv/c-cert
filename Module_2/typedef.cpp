#include <iostream>

typedef double WEIGHT;
typedef struct{
    char name[50];
    int age;
} PERSON;

typedef char cMiddleInitial;
typedef int bPrintReady;


//Using hungarian notation:
typedef size_t COUNTER;
int main(){
    WEIGHT max = 89.93;
    std::cout << max << std::endl;
    PERSON me = {"Francisco", 19};
    
    std::cout << me.name << std::endl;
    std::cout << me.age << std::endl;
    COUNTER i = 0;
    std::cout<< sizeof(i) << std::endl;
    typedef int iHOUR;



    return 0;
}