// (31) Write a program to return more than one value from a function.


#include <stdio.h>

void calculate(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int num1 = 5, num2 = 10;
    int sum, product;
    
    calculate(num1, num2, &sum, &product);
    
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    
    return 0;
}
