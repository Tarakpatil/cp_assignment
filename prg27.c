// (27) Program to show table of given number usingfunction.
#include <stdio.h>
void table(int num) {

    for(int i=1;i<=10;i++) {

        printf("%d * %d = %d\n", num,i,num*i);
    }
}

void main() {

    int num;
    printf("Enter the number to print the table : ");
    scanf("%d",&num);
    table(num);
}