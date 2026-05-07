// Write a C program to print the record of student merit wise. Here a structure variable is defined which contains student rollno, name and score.

#include <stdio.h>
struct student {
    int rollno;
    char name[20];
    int score;
};
void main(){
    struct student s[20];
    int i,n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter roll number, name and score of student %d: ", i+1);
        scanf("%d %s %d", &s[i].rollno, s[i].name, &s[i].score);
    }
    struct student temp;
    int j;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(s[j].score < s[j+1].score){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("The Merit List is :\n");
    for(i=0; i<n; i++){
        printf("Roll No: %d, Name: %s, Score: %d\n", s[i].rollno, s[i].name, s[i].score);
    }
}