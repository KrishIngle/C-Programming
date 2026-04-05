// Write a C program to search a given number from a sorted 1D array and display the position at which it is found using binary search algorithm. The index location starts from 1.

#include <stdio.h>
int main() {
    int c, n, search, array[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(c = 0; c < n; c++) {
        printf("Enter element %d: ", c + 1);
        scanf("%d", &array[c]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    int first=0, last=n-1, middle=(first+last)/2;
    while (first <= last) {
        if (array[middle] < search) {
            first = middle + 1;
        }
        else if (array[middle] == search) {
            printf("Element found at position %d\n", middle + 1);
            break;
        }
        else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last) {
        printf("Element not found\n");
    }
    return 0;
}