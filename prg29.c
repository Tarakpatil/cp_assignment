// (29) Program to show call by reference.
#include <stdio.h>


void modifyValue(int *num) {
    *num = 100;
    printf("Inside modifyValue function: num = %d\n", *num);
}

int main() {
    int num = 10;
    
    printf("Before calling modifyValue: num = %d\n", num);
    
    modifyValue(&num);
    
    printf("After calling modifyValue: num = %d\n", num);
    
    return 0;
}
