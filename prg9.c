// (8) Program to show reverse of given number.

#include <stdio.h>

void main() {

    int i,num;

    printf("Enter the number to reverse : ");
    scanf("%d",&num);

    while(num!=0) {
        i=num%10;
        printf("%d",i);
        num/=10;
    }
}