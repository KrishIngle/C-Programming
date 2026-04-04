#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, i, gcd;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1<=0 || num2<=0){
        printf("Please enter positive number: ");
        return 1;
    }

    for(i=1; i<=num1 && i<=num2; i++){
        if(num1%i == 0 && num2%i == 0){
            gcd = i;
        }
    }

    printf("Greatest Common Divisor of %d and %d is: %d", num1, num2, gcd);

    return 0;
}