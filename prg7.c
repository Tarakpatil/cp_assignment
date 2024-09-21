// (6) Program to show swapping of 2 numbers without using the third variable.

#include <stdio.h>

void main() {

    int a,b;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("the changed value of a and b are %d and %d", a,b);
}
