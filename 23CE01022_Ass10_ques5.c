#include <stdio.h>


enum PayType {
    HOURLY,
    SALARY
};


union EmpDetails {
    struct {
        float hourly_wage;
        int hours_worked;
    } hourly_details;
    struct {
        double fixed_salary;
        double bonus;
    } salary_details;
};


struct Employee {
    int id;
    char name[50];
    enum PayType pay_type;
    union EmpDetails details;
};

int main() {
    
    struct Employee emp;

    
    emp.id = 101;
    strcpy(emp.name, "John Doe");

    emp.pay_type = HOURLY;


    if (emp.pay_type == HOURLY) {
        emp.details.hourly_details.hourly_wage = 15.50;
        emp.details.hourly_details.hours_worked = 40;
    } else if (emp.pay_type == SALARY) {
        emp.details.salary_details.fixed_salary = 50000.00;
        emp.details.salary_details.bonus = 5000.00;
    }

    
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);

    
    if (emp.pay_type == HOURLY) {
        printf("Hourly Wage: %.2f\n", emp.details.hourly_details.hourly_wage);
        printf("Hours Worked: %d\n", emp.details.hourly_details.hours_worked);
    } else if (emp.pay_type == SALARY) {
        printf("Fixed Salary: %.2lf\n", emp.details.salary_details.fixed_salary);
        printf("Bonus: %.2lf\n", emp.details.salary_details.bonus);
    }

    return 0;
}