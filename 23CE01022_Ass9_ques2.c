#include <stdio.h>


struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};


void readStudentDetails(struct student *s) {
    printf("Enter Roll No: ");
    scanf("%d", &(s->rollNo));
    printf("Enter Name: ");
    scanf("%s", s->name);
    printf("Enter Address: ");
    scanf("%s", s->address);
    printf("Enter Age: ");
    scanf("%d", &(s->age));
    printf("Enter Average Marks: ");
    scanf("%f", &(s->averageMarks));
}


void displayStudentDetails(struct student s) {
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Address: %s\n", s.address);
    printf("Age: %d\n", s.age);
    printf("Average Marks: %.2f\n", s.averageMarks);
}

int main() {
    struct student students[6];

    
    for (int i = 0; i < 6; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        readStudentDetails(&students[i]);
    }


    for (int i = 0; i < 6; i++) {
        displayStudentDetails(students[i]);
    }

    return 0;
}