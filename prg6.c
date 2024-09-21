// (5) Program to calculate sum of 5 objects and print average.

#include <stdio.h>

void main() {

    int a,b,c,d,e;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter c:");
    scanf("%d",&c);

    printf("Enter d:");
    scanf("%d",&d);

    printf("Enter e:");
    scanf("%d",&e);

    int avg = (a+b+c+d+e)/5;

    printf("The average of 5 numbers is : %d", avg);

}


