// Write a C program to generate pseudo random numbers.

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    srand(time(0));

    for (int i = 0; i < 5; i++) {
        int random_number = rand();
        printf("Pseudo random number %d: %d\n", i + 1, random_number);
    }

    return 0;
}