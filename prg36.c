// (36) Write a program in C to add two numbers using pointers.

#include <stdio.h>

int main() {
    int num1 = 5, num2 = 10, sum;
    int *ptr1 = &num1, *ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("Sum: %d\n", sum);

    return 0;
}

