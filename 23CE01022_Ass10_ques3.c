#include <stdio.h>


union EmpDetails {
    float hourly_wage;
    double fixed_salary;
};


struct Employee {
    int id;
    char name[50];
    union EmpDetails details;
};

int main() {

    struct Employee emp;

    
    emp.id = 101;
    strcpy(emp.name, "John Doe");

    
    char choice;
    printf("Enter 'H' for hourly wage or 'S' for fixed salary: ");
    scanf(" %c", &choice);

    if (choice == 'H') {
        printf("Enter hourly wage: ");
        scanf("%f", &emp.details.hourly_wage);
    } else if (choice == 'S') {
        printf("Enter fixed salary: ");
        scanf("%lf", &emp.details.fixed_salary);
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    
    printf("\nEmployee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);


    if (choice == 'H') {
        printf("Hourly Wage: %.2f\n", emp.details.hourly_wage);
    } else if (choice == 'S') {
        printf("Fixed Salary: %.2lf\n", emp.details.fixed_salary);
    }

    return 0;
}