// (19)Program to find whether a given number is prime or not.

#include<stdio.h> 

void main() {

    int num,flag=0;

    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=2;i<num;i++) {
        if(num % i == 0) {
            flag=1;
        }
    }
     if(flag==1) {
            printf("the number is not prime");
        }
        else {
            printf("the number is prime");
        }
}
