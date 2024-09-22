// (14)Program to display arithmetic operations usingSwitch.

#include <stdio.h>

void main() {

    int num1,num2;
    char operator;

    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    printf("Enter the operator (+,-,*,/,%%)\n");
    scanf(" %c",&operator);

    switch(operator) {

        case '+' : printf("the sum of %d and %d : %d", num1,num2,num1+num2);
        break;
        case '-' : printf("the subtraction of %d and %d : %d", num1,num2,num1-num2);
        break;
        case '*' : printf("the multiplication of %d and %d : %d", num1,num2,num1*num2);
        break;
        case '/' : printf("the division of %d and %d : %d", num1,num2,num1/num2);
        break;
        case '%' : printf("the modulo of %d and %d : %d", num1,num2,num1%num2);
        break;
        default :
        printf("Invalid operator");
        break;
    }
}
