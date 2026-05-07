// Write a C program to find velocity of car at different time instants.

#include <stdio.h>
int main() {
    float t[100] = {10, 15, 18, 22, 30}, v[100] = {22, 26, 35, 48, 68};
    float a;
    printf("Enter the time instant to find the velocity: ");
    scanf("%f", &a);
    int i,j;
    float b,c,k=0;
    for(i=0; i<5; i++) {
        b=1;
        c=1;
        for(j=0; j<5; j++) {
            if(j!=i) {
                b *= (a - t[j]);
                c *= (t[i] - t[j]);
            }
        }
        k += (b/c) * v[i];
    }
    printf("The respective value of variable c is: %.2f\n", k);
    return 0;
}