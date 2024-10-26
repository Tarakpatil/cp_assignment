#include <stdio.h>

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    add(&num1, &num2, &sum);

    printf("Sum: %d\n", sum);

    return 0;
}
