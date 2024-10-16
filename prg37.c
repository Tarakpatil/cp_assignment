// (37) Write a program in C to add numbers using call by reference

#include <stdio.h>

void add(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1 = 5, num2 = 7, result;

    add(&num1, &num2, &result);

    printf("Sum: %d\n", result);

    return 0;
}

