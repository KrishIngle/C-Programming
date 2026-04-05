// Write a C Program to find the Largest Number (integer) among Three Numbers (integers) using IF and Logical && operator.

#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3) {
        printf("The largest number is: %d", n1);
    }
    else if (n2 >= n1 && n2 >= n3) {
        printf("The largest number is: %d", n2);
    }
    else {
        printf("The largest number is: %d", n3);
    }
}