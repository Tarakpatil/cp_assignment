#include <stdio.h>

int main() {
    FILE *filePtr;
    char name[50];
    int roll;
    float marks;

    filePtr = fopen("student_data.txt", "w");

    if (filePtr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks: ");
    scanf("%f", &marks);

    fprintf(filePtr, "%s %d %.2f\n", name, roll, marks);
    fclose(filePtr);

    filePtr = fopen("student_data.txt", "r");

    if (filePtr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading data from file:\n");
    fscanf(filePtr, "%s %d %f", name, &roll, &marks);
    printf("Name: %s\n", name);
    printf("Roll number: %d\n", roll);
    printf("Marks: %.2f\n", marks);

    fclose(filePtr);

    return 0;
}
