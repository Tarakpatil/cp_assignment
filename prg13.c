/*(13)Program to use Switch statement, Display percentage
of student.*/

#include <stdio.h>

void main() {

    char grade;

    printf("Enter your grade : ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A': printf("You got 90%%");
        break;
    case 'B': printf("You got 80%%");
        break;
    case 'C': printf("You got 70%%");
        break;
    case 'D': printf("You got 60%%");
        break;
    case 'E': printf("You got 50%%");
        break;
    default: printf("You fail");
        break;
    }
}