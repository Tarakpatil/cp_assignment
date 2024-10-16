// (35) Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);

    return 0;
}

