#include <stdio.h>
#include <stdbool.h>

#define NUM_TESTS 3
#define PASS_MARK 35

struct CourseRecord {
    char firstName[50];
    char lastName[50];
    int rollNumber;
    char department[50];
    char courseCode[20];
    int testMarks[NUM_TESTS];
};


float calculateAverageTestMarks(struct CourseRecord record) {
    float sum = 0.0;
    for (int i = 0; i < NUM_TESTS; i++) {
        sum += record.testMarks[i];
    }
    return sum / NUM_TESTS;
}


bool isPass(struct CourseRecord record) {
    float average = calculateAverageTestMarks(record);
    if (average >= PASS_MARK) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    struct CourseRecord studentRecord = {
        .firstName = "John",
        .lastName = "Doe",
        .rollNumber = 123456,
        .department = "Computer Science",
        .courseCode = "CS101",
        .testMarks = {75, 80, 60} 
    };

    
    float averageMarks = calculateAverageTestMarks(studentRecord);

    
    bool passed = isPass(studentRecord);

    
    printf("Student Name: %s %s\n", studentRecord.firstName, studentRecord.lastName);
    printf("Roll Number: %d\n", studentRecord.rollNumber);
    printf("Department: %s\n", studentRecord.department);
    printf("Course Code: %s\n", studentRecord.courseCode);
    printf("Average Test Marks: %.2f\n", averageMarks);
    if (passed) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }

    return 0;
}