#include <stdio.h>

int main() {
    FILE *filePtr;
    char name[50];
    int roll;
    float marks;

    filePtr = fopen("student_info.txt", "w");

    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks: ");
    scanf("%f", &marks);

    fprintf(filePtr, "Name: %s\n", name);
    fprintf(filePtr, "Roll number: %d\n", roll);
    fprintf(filePtr, "Marks: %.2f\n", marks);

    fclose(filePtr);

    printf("Information stored in 'student_info.txt'.\n");

    return 0;
}
