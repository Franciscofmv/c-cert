#include <iostream>

typedef double WEIGHT;
typedef struct{
    char name[50];
    int age;
} PERSON;
int main(){
    WEIGHT max = 89.93;
    std::cout << max << std::endl;
    PERSON me = {"Francisco", 19};
    
    std::cout << me.name << std::endl;
    std::cout << me.age << std::endl;

    return 0;
}