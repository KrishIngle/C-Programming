// Write a C Program to calculates the area (floating point number with two decimal places) of a Circle given it’s radius (integer value). The value of Pi is 3.14

#include <stdio.h>
#define PI 3.14

void main() {
    int radius;
    float area;
    printf("Enter the value of radius of circle: ");
    scanf("%d", &radius);

    area = PI * radius * radius;
    printf("Area of circle with radius %d is %.2f", radius, area);
}