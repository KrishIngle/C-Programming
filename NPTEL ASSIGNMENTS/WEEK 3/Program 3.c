// Write a C program to check whether a given number (integer) is Even or Odd.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%2 == 0) {
        printf("The number is EVEN");
    }
    else {
        printf("The number is ODD");
    }
    return 0;
}