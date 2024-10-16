// (30) Write a program to show how similar name variables can be used in different functions.

#include <stdio.h>

void function1() {
    int num = 10;
    printf("Inside function1: num = %d\n", num);
}


void function2() {
    int num = 20;
    printf("Inside function2: num = %d\n", num);
}

int main() {
    int num = 30;
    printf("Inside main: num = %d\n", num);
    
    function1();  
    function2(); 
    
    return 0;
}
