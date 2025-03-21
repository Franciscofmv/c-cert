#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declaring array:
    int r[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int x[12];
    int *p = x; // now x and p points to the same element.
    for(int i = 0; i < 12; ++i){
        x[i] = i;
        printf("%d\n", x[i]);
    };
 
    for(int i =0; i<12; ++i){
        printf("%d\n, %p", *(p + i));
    };
    printf("\n%d %d", x[2], p[3]);
    return 0;
};