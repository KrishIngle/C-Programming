// Write a C Program to find Largest Element of an Integer Array. Here the number of elements in the array ‘n’ and the elements of the array is read from the test data. Use the printf statement given below to print the largest element. printf("Largest element = %d", largest);

#include <stdio.h>

int main() {
    int N, i, largest;
    int arr[N];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (i = 1; i < N; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element = %d", largest);
    return 0;
}