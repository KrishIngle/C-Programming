#include <stdio.h>
#include <math.h>

int factorial(int n){
    if(n == 0 || n ==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int a, b;
    int i;

    printf("Main Menu: \n");
    printf("1. Add two numbers: \n");
    printf("2. Subtract two numbers: \n");
    printf("3. Multiply two numbers: \n");
    printf("4. Divide two numbers: \n");
    printf("5. Power: \n");
    printf("6. Factorial: \n");
    printf("Exit \n");

    printf("Enter Your Choice: ");
    scanf("%d", &i);

    if (i>=1 && i<=6){
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        }
    
    switch (i) {
        case 1:
        printf("\n Sum = %d", a+b);
        break;

        case 2:
        printf("\n Difference = %d", a-b);
        break;

        case 3:
        printf("\n Multiply = %d", a*b);
        break;

        case 4:
        printf("\n Division = %d", a/b);
        break;

        case 5:
        printf("Power = %d", (int)pow(a, b));
        break;

        case 6:
        printf("Factorial of %d is %d", a, factorial(a));
        break;

        default:
        printf("\n Thank you / Invalid choice");
        break;
    }

    return 0;
}