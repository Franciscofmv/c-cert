#include <stdio.h>
#include <stdlib.h>

//int max(int x[], int size){
int max(int *x, int size){
// Calculate the maximum of an array
int maximum = x[0];
int i=0;
    for(i=0; i<size ; ++i){
        if(x[i] > maximum){
            maximum = x[i];
        }
    }
return maximum;
}

// Pointers to function:
float print_float(float x){
    return x;
}

int main(){
    int result;
    const int size=5;
    int arr[size]={0,1,2,3,4};
    printf("The maximum in the array is = %d", max(arr, size));

    // Pointer to a function:
    float (*func)(float);
    // store the address of the function:
    func = print_float;
    printf("\n%.3f", func(3.01));
    printf("\n%.3f", (*func)(3.01));

return 0;
}