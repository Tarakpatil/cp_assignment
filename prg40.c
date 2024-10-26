#include <stdio.h>

void sum(int arr[5]) {

	int sum = 0;
	for(int i=0;i<5;i++) {

		sum+=arr[i];
	}
	printf("the sum of elements of array : %d",sum);
}
void main() {

	int arr[5];
	printf("Enter the array elements\n");

	for(int i=0;i<5;i++) {

		scanf("%d", &arr[i]);
	}

	sum(arr);

}