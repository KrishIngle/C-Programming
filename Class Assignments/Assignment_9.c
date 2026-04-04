// Program to check whether given number is an ARMSTRONG number or not.

# include <stdio.h>

int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is an ARMSTRONG number.", num);
    } else {
        printf("%d is not an ARMSTRONG number.", num);
    }
    return 0;
}