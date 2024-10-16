// (26)Program to find factorial of given number using function

#include <stdio.h>

int fact(int num) {

    int fact=1;
    for(int i=1;i<=num;i++) {
        fact *=i;
    }
    return fact;
}
void main() {

int num;
printf("Enter number to find factorial : ");
scanf("%d",&num);
int ans = fact(num);
printf("the factorial is : %d",ans);
}