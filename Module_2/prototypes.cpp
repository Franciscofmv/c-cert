#include <iostream>

int square(int x);
float square(float x);
double square(double);

int main(){
    int x = 10;
    float y = 2.5;
    double z = 4.5;
    printf(
        "square of int = %d\nsquare of float = %f\nsquare of double = %lf",
        x, y, z);
    return 0;
}

int square(int x){
    return x * x;
}
float square(float x){ 
    return x * x;
}
double square(double x){ 
    return x * x;
}