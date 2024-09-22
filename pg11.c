// (11)Program to find that entered year is Leap year or not.

#include <stdio.h>

void main() {

    int year;

    printf("Enter the year to check if it's leap year or not : ");
    scanf("%d", &year);

    if(year % 4 == 0) {
        printf("It's a leap year");
    }
    else {
        printf("It's not a leap year");
    }

}