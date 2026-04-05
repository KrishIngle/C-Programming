// Write a C program to find the root of the equation using Newton Raphson method. f(x) = x^3 - 2x^2 - 3. The maximum number of steps are taken as input.

#include <stdio.h>
float f(float x);
float df(float x);

int main(){
    int itr, maxitr;
    float x0=1.0, x1;
    printf("Enter the maximum number of iterations: ");
    scanf("%d", &maxitr);

    float h;
    for(itr=1; itr<=maxitr; itr++) {
        h = f(x0) / df(x0);
        x1 = x0 - h;
        x0 = x1;
    }
    printf("The root is: %8.6f\n", x1);
    return 0;
}
float f(float x){
    return x*x*x - 2*x*x - 3;
}
float df(float x){
    return 3*x*x - 4*x;
}