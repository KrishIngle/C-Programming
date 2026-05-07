// Write a C Program to find factorial of a given number using Pointers.

#include <stdio.h>
void findFact(int, long int*);
int main() {
    long int fact;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    findFact(num, &fact);
    printf("Factorial of %d is: %ld\n", num, fact);
    return 0;
}
void findFact(int n, long int *f) {
    int i;
    *f = 1;
    for (i = 1; i <= n; i++) {
        *f *= i;
    }
}