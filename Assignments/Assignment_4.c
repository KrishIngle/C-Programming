#include <stdio.h>
int main(){
    float basic_pay, gross_pay, net_pay, HRA, TA, Tax;
    printf("Enter Basic Pay: ");
    scanf("%f", &basic_pay);
    HRA = basic_pay*0.1;
    TA = basic_pay*0.05;
    gross_pay = basic_pay+HRA+TA;
    Tax = gross_pay*0.02;
    net_pay = gross_pay - Tax;
    printf("Net Salary is: %f \n", net_pay);
    
    return 0;
}