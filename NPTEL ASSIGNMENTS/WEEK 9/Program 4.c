// Write a C program to reverse an array by swapping the elements and without using any new array.

#include <stdio.h>

int main(){
    int array[100], n, c;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(c = 0; c < n; c++) {
        printf("Enter element %d: ", c + 1);
        scanf("%d", &array[c]);
    }
    int temp, end;
    end = n -1;
    for(c = 0; c < n/2; c++) {
        temp = array[c];
        array[c] = array[end];
        array[end] = temp;
        end--;
    }
    printf("Reversed array: ");
    for(c = 0; c < n; c++) {
        printf("%d ", array[c]);
    }
    return 0;
}