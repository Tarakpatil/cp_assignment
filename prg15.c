// (15)Program to display first 15 natural numbers and their sum using For Loop.

#include <stdio.h>

void main() {

    int sum=0;
    
    for(int i=1;i<=15;i++) {

        printf("%d\n",i);
        sum+=i;
    }
    printf("the sum of first 15 numbers : %d", sum);
}
