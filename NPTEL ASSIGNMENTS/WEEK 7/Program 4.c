// Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. The given string may be a word or a sentence.

#include <stdio.h>

int main(){
    int upper = 0, lower = 0;
    char ch[100];
    printf("Enter a string: ");
    scanf(" %[^\n]s", ch);

    int i=0;
    while(ch[i] != '\0'){
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            upper++;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            lower++;
        }
        i++;
    }
    printf("Number of uppercase letters: %d\n", upper);
    printf("Number of lowercase letters: %d\n", lower);
    return 0;
}