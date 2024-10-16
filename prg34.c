// (34) Write a program in C to demonstrate how to handle the pointers in the program.


#include <stdio.h>

int main() {
    int num = 20;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 50;

    printf("Modified value of num: %d\n", num);

    return 0;
}
