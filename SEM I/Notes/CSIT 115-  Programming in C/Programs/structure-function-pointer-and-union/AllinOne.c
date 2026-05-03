#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

Student *students = NULL;
int count = 0;

// Function prototypes
void addStudents();
void displayStudents();
void saveToFile();
void readFromFile();

int main() {
    int choice;

    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Save to File\n");
        printf("4. Read from File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudents();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                saveToFile();
                break;
            case 4:
                readFromFile();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while(choice != 5);

    free(students);
    return 0;
}

// Add Students
void addStudents() {
    int n;

    printf("Enter number of students to add: ");
    scanf("%d", &n);

    students = (Student*)realloc(students, (count + n) * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = count; i < count + n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    count += n;
}

// Display Students
void displayStudents() {
    if (count == 0) {
        printf("No student records available.\n");
        return;
    }

    printf("\nStudent Records:\n");

    for (int i = 0; i < count; i++) {
        printf("\nID: %d", students[i].id);
        printf("\nName: %s", students[i].name);
        printf("\nMarks: %.2f\n", students[i].marks);
    }
}

// Save to File
void saveToFile() {
    FILE *fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d %s %.2f\n",
                students[i].id,
                students[i].name,
                students[i].marks);
    }

    fclose(fp);
    printf("Data saved to students.txt\n");
}

// Read from File
void readFromFile() {
    FILE *fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    Student temp;

    printf("\nData from File:\n");

    while (fscanf(fp, "%d %s %f",
                  &temp.id,
                  temp.name,
                  &temp.marks) != EOF) {

        printf("\nID: %d", temp.id);
        printf("\nName: %s", temp.name);
        printf("\nMarks: %.2f\n", temp.marks);
    }

    fclose(fp);
}