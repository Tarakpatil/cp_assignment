#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *ptr;
    
    // Dynamically allocate memory for one Student structure
    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter student's name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nDisplaying student information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    // Free the allocated memory
    free(ptr);

    return 0;
}
