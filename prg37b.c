#include <stdio.h>

int largest(int a,int b) {

	if(a>b) {
		return a;
	}
	else {
		return b;
	}
}

void main() {

	int a,b;

	printf("Enter 1st number : ");
	scanf("%d",&a);

	printf("Enter 2nd number : ");
	scanf("%d",&b);

	int large = largest(a,b);
	printf("the largest among %d and %d is %d",a,b,large);
	
}