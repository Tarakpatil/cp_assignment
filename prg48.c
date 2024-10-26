#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int roll;
    struct Date dob; 
};

int main() {
    struct Student student;

    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &student.dob.day, &student.dob.month, &student.dob.year);

    printf("\nDisplaying student information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll);
    printf("Date of birth: %02d-%02d-%d\n", student.dob.day, student.dob.month, student.dob.year);

    return 0;
}
