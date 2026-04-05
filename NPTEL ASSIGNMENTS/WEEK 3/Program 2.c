// Write a C program to check if a given Number is zero or Positive or Negative Using if...else statement.

#include <stdio.h>

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number > 0) {
        printf("The number is Positive.");
    }
    else if (number < 0) {
        printf("The number is Negative.");
    }
    else {
        printf("The number is Zero.");
    }
    return 0;
}