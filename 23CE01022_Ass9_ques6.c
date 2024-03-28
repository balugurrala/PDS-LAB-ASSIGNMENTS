#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_RECORDS 100

struct StudentRecord {
    char name[50];
    int rollNumber;
    float percentage;
};

struct StudentRecord studentDB[MAX_RECORDS];
int numRecords = 0; 


void insert(char name[], int rollNumber, float percentage) {
    
    if (numRecords >= MAX_RECORDS) {
        printf("Database is full. Cannot insert more records.\n");
        return;
    }


    int i;
    for (i = numRecords - 1; i >= 0 && studentDB[i].rollNumber > rollNumber; i--) {
        studentDB[i + 1] = studentDB[i];
    }


    strcpy(studentDB[i + 1].name, name);
    studentDB[i + 1].rollNumber = rollNumber;
    studentDB[i + 1].percentage = percentage;
    numRecords++;
}


void sortName() {
    struct StudentRecord temp;
    for (int i = 0; i < numRecords - 1; i++) {
        for (int j = 0; j < numRecords - 1 - i; j++) {
            if (strcmp(studentDB[j].name, studentDB[j + 1].name) > 0) {
                temp = studentDB[j];
                studentDB[j] = studentDB[j + 1];
                studentDB[j + 1] = temp;
            }
        }
    }
}


char* findOne(char prefix[]) {
    for (int i = 0; i < numRecords; i++) {
        if (strncmp(studentDB[i].name, prefix, strlen(prefix)) == 0) {
            return studentDB[i].name;
        }
    }
    return NULL; 
}


void specs(int *count, float *highestPercentage, float *lowestPercentage, float *mean, float *stdDev) {
    *count = numRecords;

    if (numRecords == 0) {
        *highestPercentage = *lowestPercentage = *mean = *stdDev = 0;
        return;
    }

    *highestPercentage = *lowestPercentage = studentDB[0].percentage;
    float sum = studentDB[0].percentage;
    for (int i = 1; i < numRecords; i++) {
        sum += studentDB[i].percentage;
        if (studentDB[i].percentage > *highestPercentage) {
            *highestPercentage = studentDB[i].percentage;
        }
        if (studentDB[i].percentage < *lowestPercentage) {
            *lowestPercentage = studentDB[i].percentage;
        }
    }

    *mean = sum / numRecords;

    float variance = 0;
    for (int i = 0; i < numRecords; i++) {
        variance += powf(studentDB[i].percentage - *mean, 2);
    }
    variance /= numRecords;
    *stdDev = sqrtf(variance);
}


void delete(int rollNumber) {
    int i, j;
    for (i = 0; i < numRecords; i++) {
        if (studentDB[i].rollNumber == rollNumber) {
            for (j = i; j < numRecords - 1; j++) {
                studentDB[j] = studentDB[j + 1];
            }
            numRecords--;
            printf("Record with roll number %d deleted.\n", rollNumber);
            return;
        }
    }
    printf("Record with roll number %d not found.\n", rollNumber);
}

int main() {
    
    insert("John Doe", 101, 85.5);
    insert("Alice Smith", 102, 70.2);
    insert("Bob Johnson", 103, 92.3);
    insert("Charlie Brown", 104, 65.8);
    insert("David Lee", 105, 78.9);
    insert("Emma Watson", 106, 88.0);

    sortName();

    char* foundName = findOne("A");
    if (foundName != NULL) {
        printf("Name found with prefix 'A': %s\n", foundName);
    } else {
        printf("No name found with prefix 'A'\n");
    }

    int count;
    float highestPercentage, lowestPercentage, mean, stdDev;
    specs(&count, &highestPercentage, &lowestPercentage, &mean, &stdDev);
    printf("Number of records: %d\n", count);
    printf("Highest Percentage: %.2f\n", highestPercentage);
    printf("Lowest Percentage: %.2f\n", lowestPercentage);
    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", stdDev);

    delete(103);

    return 0;
}