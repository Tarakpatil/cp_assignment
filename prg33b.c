#include <stdio.h>

void evenodd(int n) {

	if(n % 2 == 0) {
		printf("The number is even");
	}
	else {
		printf("The number is odd");
	}
}

void main() {

	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	evenodd(n);
}