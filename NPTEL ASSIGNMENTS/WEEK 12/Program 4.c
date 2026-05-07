// Write a C program to add two distances given as input in feet and inches.

#include <stdio.h>
struct Distance {
    int feet;
    float inches;
}d1,d2,sum;

int main(){
    printf("Enter first distance (feet and inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);
    printf("Enter second distance (feet and inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);
    
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    
    if(sum.inches >= 12) {
        sum.feet += (int)(sum.inches / 12);
        sum.inches = sum.inches - (12 * (int)(sum.inches / 12));
    }
    
    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);
    return 0;
}