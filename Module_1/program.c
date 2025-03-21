#include <stdio.h>
#include <stdlib.h>

int main(){
    // Pointers:
    int k = 10;
    int *p;
    p = &k;
    printf("%p the val is = %d", p, *p);
    *p = 17;
    printf("\nNow changing the value of p, k = %d", k);
    
    // Initializing pointers:
    int k2 = 18;
    int *p2 = &k2;
    printf("\nk2 = %d\np2 = %p\n*p2 = %i\nk2 = %p\n&p2 = %p", 
        k2, p2, *p2, &k2, &p2);
        
};