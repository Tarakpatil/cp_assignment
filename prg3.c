#include <stdio.h>
#define PI 3.1416

void main() {

    float rad;

    printf("Enter radius:");
    scanf("%f", &rad);

    float circum = 2*PI*rad;

    float area = PI*rad*rad;

    printf("The circumference of circle is : %f\n", circum);
    printf("The area of circle is : %f", area);
}
