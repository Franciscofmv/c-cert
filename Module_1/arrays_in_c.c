#include <stdio.h>
#include <stdlib.h>

int square1(int x){
    return x*x;
}

float square2(float x){
    return x*x;
}

int main(){
    // Declaring array:
    int r[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int x[12];
    int *p = x; // now x and p points to the same element.
    for(int i = 0; i < 12; ++i){
        x[i] = i;
        printf("%d\n", x[i]);
    };
 
    // for(int i =0; i<12; ++i){
    //     printf("%d\n, %p", *(p + i));
    // };

    printf("\n%d %d", x[2], p[3]);

    int (*sq)(int) = square1;
    int val1 = sq(38);
    float (*sq2)(float) = square2;
    float val2 = (*sq2)(3.7);
    printf("square of integer: %i\nsquare of float %f:\n ", val1, val2);
    return 0;
};