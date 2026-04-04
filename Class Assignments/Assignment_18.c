// Write a C program that accepts a string from the user and performs following string operations: a) Calculate the length of the string. b) Reverse the string. c) Equality check of two strings. d) Check Palindrome. e) Check Substring.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%s", str);

    int length = strlen(str);
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;

    char str2[100];
    printf("Enter another string:");
    scanf("%s", str2);
    if (strcmp(str, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    
}