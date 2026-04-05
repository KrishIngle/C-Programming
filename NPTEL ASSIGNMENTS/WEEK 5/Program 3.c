// Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not. For example 8 can be expressed as 2^3.

#include <stdio.h>

int main() {
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int temp=N, count=0;
    while (temp != 1) {
        if (temp % 2 != 0) {
            count = 1;
            break;
        }
        temp /= 2;
    }
    if (count == 0){
        printf("%d can be expressed as Power of Two.\n", N);
    }
    else {
        printf("%d cannot be expressed as Power of Two.\n", N);
    }
    return 0;
}