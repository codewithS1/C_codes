// School management system by Shrikant tiwari

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50
struct Student {
    int rollNumber;
    char name[50];
    float marks[5]; 
};

void addStudent(struct Student *students, int *numStudents) {
    if (*numStudents < MAX_STUDENTS) {
        printf("Enter roll number: ");
        scanf("%d", &students[*numStudents].rollNumber);
        printf("Enter name: ");
        scanf("%s", students[*numStudents].name);
        printf("Enter marks for 5 subjects:\n");
        for (int i = 0; i < 5; i++) {
            printf("Subject %d: ", i + 1);
            scanf("%f", &students[*numStudents].marks[i]);
        }
        (*numStudents)++;
        printf("Student added successfully.\n");
    } else {
        printf("Maximum number of students reached.\n");
    }
}
void displayStudents(struct Student *students, int numStudents) {
    printf("Student Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: ");
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\n\n");
    }
}

void searchStudent(struct Student *students, int numStudents) {
    int rollNumber;
    printf("Enter roll number to search: ");
    scanf("%d", &rollNumber);
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: ");
            for (int j = 0; j < 5; j++) {
                printf("%.2f ", students[i].marks[j]);
            }
            printf("\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void calculateAverage(struct Student *students, int numStudents) {
    float totalMarks = 0;
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < 5; j++) {
            totalMarks += students[i].marks[j];
        }
    }
    float average = totalMarks / (numStudents * 5);
    printf("Average marks of all students: %.2f\n", average);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    do {
        printf("\nSchool Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &numStudents);
                break;
            case 2:
                displayStudents(students, numStudents);
                break;
            case 3:
                searchStudent(students, numStudents);
                break;
            case 4:
                calculateAverage(students, numStudents);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}