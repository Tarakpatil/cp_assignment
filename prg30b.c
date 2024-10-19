#include <stdio.h>

void swap(int a,int b) {

	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("After swapping a : %d and b : %d",a,b);

}

void main() {

	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);

	printf("before swapping a : %d and b : %d\n",a,b);
	swap(a,b);

}

