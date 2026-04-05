// Write a program to find the factorial of a given number using while loop.

#include <stdio.h>

int main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else {
        int i = 1;
        while (i <= num) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is %d", num, factorial);
    }

    return 0;
}