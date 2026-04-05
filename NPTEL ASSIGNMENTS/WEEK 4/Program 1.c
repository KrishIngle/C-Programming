// Write a C Program to Find the Smallest Number among Three Numbers (integer values) using Nested IF-Else statement.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        printf("The smallest number is: %d", a);
    }
    else if (b <= a && b <= c) {
        printf("The smallest number is: %d", b);
    }
    else {
        printf("The smallest number is: %d", c);
    }

    return 0;
}