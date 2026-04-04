// Create structure EMPLOYEE for storing details (Name,Designation, Gender, Date of Joining and Salary). Define Function members to compute a) Total number of emplyoees in an organization. b) Count of Male and Female Employees. c) Emplyoee with salary more than 10,000. d) Emplyoee with designation "Asst. Manager".

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    char date_of_joining[20];
    float salary;
};

int main() {
    int n, i, total_employees = 0, male_count = 0, female_count = 0;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for(i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Gender: ");
        scanf("%s", employees[i].gender);
        printf("Date of Joining: ");
        scanf("%s", employees[i].date_of_joining);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        total_employees++;
        if(strcmp(employees[i].gender, "Male") == 0) {
            male_count++;
        } else {
            female_count++;
        }
    }

    printf("Total number of employees: %d\n", total_employees);
    printf("Count of male employees: %d\n", male_count);
    printf("Count of female employees: %d\n", female_count);
    printf("Employees with salary more than 10,000:\n");
    for(i = 0; i < n; i++) {
        if(employees[i].salary > 10000) {
            printf("%s\n", employees[i].name);
        }
    }
    printf("Employees with designation 'Asst. Manager':\n");
    for(i = 0; i < n; i++) {
        if(strcmp(employees[i].designation, "Asst. Manager") == 0) {
            printf("%s\n", employees[i].name);
        }
    }
    return 0;
}