#include <stdio.h>
int main(){
    float marks[5];
    float total = 0, percentage;
    int i;
    printf("Enter marks for 5 subjects: \n");
    for(i=0; i<5; i++){
        printf("Subject: %d",i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    percentage = (total/500)*100;
    printf("Total Marks: %f \n", total);
    printf("Percentage: %f \n", percentage);

    if(percentage>=75){
        printf("Distinction");
    }
    else if(percentage>=60){
        printf("First Division");
    }
    else if(percentage>=50){
        printf("Second Division");
    }
    else{
        printf("Third Division");
    }

    return 0;
}