#include <stdio.h>
int main(){
    float marks[5];
    float total = 0, percentage;
    int i;
    printf("Enter marks for 5 subjects: \n");
    for(i=0; i<5; i++){
        scanf("%f", &marks[i]);

        if(marks[i] < 0 || marks[i]>100){
            printf("Invalid marks entered");
            return 1;
        }
        total += marks[i];

    }
}