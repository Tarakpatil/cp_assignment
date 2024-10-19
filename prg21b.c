#include <stdio.h>

void main() {

	int arr[10],sum=0;

	printf("The elements of array\n");

	for(int i=0;i<10;i++) {

		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	int avg = sum/10;

	printf("the sum of 10 numbers of array : %d\n",sum);
	printf("the average of the array : %d\n",avg);

}