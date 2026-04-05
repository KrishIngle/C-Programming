// Write a program to print all the locations at which a particular element (taken as input) is found in a list and also print the total number of times it occurs in the list. The location starts from 1.
// For example if there are 4 elements in the array
// 5
// 6
// 5
// 7
// If the element to search is 5 then the output will be
// 5 is present at location 1
// 5 is present at location 3
// 5 is present 2 times in the array.

#include <stdio.h>

int main(){
    int array[100], search, n, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int c;
    for (c = 0; c < n; c++) {
        printf("Enter element %d: ", c + 1);
        scanf("%d", &array[c]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(c = 0; c < n; c++) {
        if (array[c] == search) {
            printf("%d is present at location %d\n", search, c + 1);
            count++;
        }
    }
    printf("%d is present %d times in the array.\n", search, count);
    return 0;
}