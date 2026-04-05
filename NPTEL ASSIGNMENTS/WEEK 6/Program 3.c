// Write a C program to read Two One Dimensional Arrays of same data type (integer type) and merge them into another One Dimensional Array of same type.

#include <stdio.h>

int main() {
    int arr1[20], arr2[20], array_new[40], n1, n2, size, i;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n1; i++) {
        array_new[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        array_new[n1 + i] = arr2[i];
    }
    printf("The merged array is: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", array_new[i]);
    }
    return 0;
}