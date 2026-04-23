// Write a C program to swap two numbers with and without using pointers.
#include <stdio.h>

void swapWithoutPointers(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Without pointers: a = %d, b = %d\n", a, b);
}

void swapWithPointers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swapWithoutPointers(x, y);

    swapWithPointers(&x, &y);
    printf("With pointers: a = %d, b = %d", x, y);

    return 0;
}