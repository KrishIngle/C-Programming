// Write a C Program to delete duplicate elements from an array of integers.

#include <stdio.h>

int main() {
    int arr[50], i, size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int j, k;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
            else {
                j++;
            }
        }
    }
    printf("The array after deleting duplicates is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}