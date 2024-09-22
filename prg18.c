// (18)Program to find factorial of given number.

#include <stdio.h>

void main() {

    int n,fact=1;

    printf("Enter the number : ");
    scanf("%d",&n);

    while(n!=0) {
        fact=fact*n;
        n--;
    }
    printf("The value of factorial is:%d",fact);
}