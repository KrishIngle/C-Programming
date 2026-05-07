// Write a C program to find integral of x^2 dx with upper limit b and lower limit a using Trapezoidal rule with 10 segments between a and b.

#include <stdio.h>
float func(float x);
int main(){
    int n=10;
    float a, b, integral;
    printf("Enter the lower limit a and upper limit b: ");
    scanf("%f %f", &a, &b);

    int i;
    float h, x, sum=0;
    if(b>a){
        h = (b-a)/n;
    }
    else{
        h = (a-b)/n;
    }
    for(i=1; i<n; i++){
        x = a + i*h;
        sum += func(x);
    }
    integral = (h/2) * (func(a) + 2*sum + func(b));
    printf("The integral is: %.6f\n", integral);
    return 0;
}
float func(float x){
    return x*x;
}