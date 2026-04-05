// Write a C program to search a given element from a 1D array and display the position at which it is found by using linear search function. The index location starts from 1.

#include <stdio.h>

int linear_search(int[], int, int);
int main() {
    int array[100], search, c, n, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(c = 0; c < n; c++) {
        printf("Enter element %d: ", c + 1);
        scanf("%d", &array[c]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    position = linear_search(array, n, search);
    if(position == -1) {
        printf("%d is not found in the array.\n", search);
    }
    else {
        printf("%d is found at location %d.\n", search, position);
    }
    return 0;
}
int linear_search(int array[], int n, int search) {
    int c;
    for(c = 0; c < n; c++) {
        if(array[c] == search) {
            return c + 1;
        }
    }
    return -1;
}