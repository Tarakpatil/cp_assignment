#include <stdio.h>

void main() {

    float temp;

    printf("Enter the value of temperature in celcius : ");
    scanf("%f", &temp);

    float farh = (temp * 9/5) + 32;

    printf("The value of temperature in farenheit : %f\n", farh);
    printf("The temperature in celcius : %f", temp);

}