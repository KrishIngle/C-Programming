// Write a C Program to find power of a given number using recursion. The number and the power to be calculated is taken from test cases.

#include <stdio.h>  
long power(int, int);
int main()
{
int pow, num;
long result;
printf("Enter the number and the power: ");
scanf("%d", &num);
scanf("%d", &pow);
result = power(num, pow);
printf("%d^%d is %ld", num, pow, result);
return 0;
}
long power(int num, int pow){
if (pow){
return (num * power(num, pow - 1));
}
return 1;
}