// Write a C Program to print the array elements in reverse order (Not reverse sorted order. Just the last element will become first element, second last element will become second element and so on). Here the size of the array, ‘n’ and the array elements is accepted from the test case data. The last part i.e. printing the array is also written. You have to complete the program so that it prints in the reverse order.

#include <stdio.h>

int main(){
    int N, i;
    int arr[N];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }

    int j , temp;
    j = i - 1;
    i = 0;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}