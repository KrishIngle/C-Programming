// Write a C program to sort a 1D array using pointer by applying Bubble sort technique.

#include <stdio.h>
void sort(int *a, int n);
int main() {
    int array[100], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    sort(array, n);
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
void sort(int *a, int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(*(a + j) > *(a + j + 1)) {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}