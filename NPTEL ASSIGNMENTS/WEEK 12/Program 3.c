// Write a C program to store n elements using Dynamuc Memory Allocation - calloc() and find the largest element.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float *element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    element = (float*)calloc(n, sizeof(float));
    if (element == NULL) {
        printf("Error!! Memory not allocated.");
        exit(0);
    }
    int i;
    for(i=0; i<n; ++i){
        printf("Enter element %d: ", i+1);
        scanf("%f", element+i);
    }
    for(i=1; i<n; ++i){
        if(*element < *(element+i)){
            *element = *(element+i);
        }
    }
    printf("Largest element = %.2f\n", *element);
    return 0;
}