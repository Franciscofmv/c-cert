#include <iostream>

int f(int x=3, int y = 2){return x+y;}
int f(int x){return x+9;}

int main(){
    f(2);
    return 0;
}