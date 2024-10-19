#include <stdio.h>

void prime(int n) {

	for(int i=2;i<=n/2;i++) {

		if(n % i == 0) {

			printf("the number is not prime");
			break;
		}
		else {
			printf("the number is prime");
			break;
		}
	}
}

void main() {

	int n;
	printf("Enter number : ");
	scanf("%d",&n);

	prime(n);
}