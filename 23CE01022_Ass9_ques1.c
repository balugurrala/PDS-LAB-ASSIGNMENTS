#include <stdio.h>
struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    
    struct company comp;
    printf("Enter company name: ");
    scanf("%[^\n]%*c", comp.name); 
    printf("Enter company address: ");
    scanf("%[^\n]%*c", comp.address);
    printf("Enter company phone: ");
    scanf("%[^\n]%*c", comp.phone);
    printf("Enter number of employees: ");
    scanf("%d", &comp.noOfEmployee);

    
    printf("\nCompany Details:\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployee);

    return 0;
}