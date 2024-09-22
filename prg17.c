// (17)Program to print Fibonacci series till 40.

#include <stdio.h> 

void main() {

    int fib1=0,fib2=1,fib;

    printf("%d  %d\t",fib1,fib2);
    for(int i=2;i<=40;i++) {
            
            fib=fib1+fib2;
            fib1=fib2;
            fib2=fib;
            printf("%d\t",fib);
        
    }

}