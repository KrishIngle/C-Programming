// Write a C program to count total number of digits of an Integer number (N).

#include <stdio.h>

int main(){
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int temp = N, count = 0;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    printf("Total number of digits in %d is: %d\n", N, count);
    return 0;
}