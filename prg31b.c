#include <stdio.h>

int factorial(int n) {
	int fact = 1;

	for(int i = 1;i<=n;i++) {

		fact *=i;
	}
	return fact;
}

void main() {

	int n;
	
	printf("Enter number : ");
	scanf("%d",&n);

	int ans = factorial(n);

	printf("the factorial of %d is %d",n,ans);
}