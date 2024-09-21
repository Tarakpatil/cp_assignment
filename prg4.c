#include <stdio.h>

void main() {

    float principal,rate,time;

    printf("Enter the value of principal : ");
    scanf("%f",&principal);

    printf("Enter the value of rate of Interest : ");
    scanf("%f",&rate);

    printf("Enter the value of time : ");
    scanf("%f", &time);

    float simpleintrest = (principal*rate*time)/100;

    printf("The value of simpleIntrest is : %f", simpleintrest);
}