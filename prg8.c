/*(7) Program to show swapping of 2 numbers using a third
variable. B. Control Structures: IF, Switch, Loops*/

#include <stdio.h>

void main() {

    int a,b,c=0;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    
    printf("the value of a and b are : %d and %d",a,b);

}