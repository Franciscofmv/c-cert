#include <stdio.h>

float midpoint(float x, float y){
    return (x + y) / 2;
}

void triple_it(int *x){
    *x = *x *3;
}
int main(){
    float a = 1.2, b = 3, middle;
    middle = midpoint(a, b);
    printf("midpoint = %.2g\n", middle);
    int y = 100;
    triple_it(&y);

    printf("%d\n", y);

    return 0;
}