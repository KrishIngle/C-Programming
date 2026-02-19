#include <stdio.h>
int main(){
    float a, b;
    int i;
    printf("Main Menu: \n");
    printf("Add two numbers: \n");
    printf("Subtract two numbers: \n");
    printf("Multiply two numbers: \n");
    printf("Divide two numbers: \n");
    printf("Exit");
    printf("Enter your choice: ");
    scanf("%f %f",&a, &b);
    scanf("%d", &i);
    for(i = 1){
        printf("\n Sum of nos. is: %f", a+b);
    }
    for(i = 2){
        printf("\n Sum of nos. is: %f", a-b);
    }
    for(i = 3){
        printf("\n Sum of nos. is: %f", a*b);
    }
    for(i = 4){
        printf("\n Sum of nos. is: %f", a/b);
    }
    return 0;
}