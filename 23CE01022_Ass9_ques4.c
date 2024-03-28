#include <stdio.h>


struct Address {
    char street[100];
    char city[50];
    char zipCode[20];
};


struct Person {
    char name[50];
    struct Address address;
};

int main() {
    
    struct Person person;

    
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter street: ");
    scanf("%s", person.address.street);
    printf("Enter city: ");
    scanf("%s", person.address.city);
    printf("Enter zip code: ");
    scanf("%s", person.address.zipCode);

    
    printf("\nPerson Details:\n");
    printf("Name: %s\n", person.name);
    printf("Address:\n");
    printf("  Street: %s\n", person.address.street);
    printf("  City: %s\n", person.address.city);
    printf("  Zip Code: %s\n", person.address.zipCode);

    return 0;
}