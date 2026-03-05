#include <stdio.h>
struct student{
    char name[50];
    float m1,m2;
    float avg;
};
int main(){
    struct student s[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the name of the student: ");
        scanf("%s",s[i].name);
        printf("Enter the marks of the student in 2 subjects: ");
        scanf("%f %f",&s[i].m1,&s[i].m2);
        s[i].avg = (s[i].m1 + s[i].m2)/2;
    }
    for(int i = 0; i < 5; i++){
        printf("The average marks of %s is: %.2f\n",s[i].name,s[i].avg);
    }
    return 0;
}
