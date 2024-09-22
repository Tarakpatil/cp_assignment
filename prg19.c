// (20)Program to create an array of 10 elements. Show the
// sum and average of 10 elements entered by the user.

#include <stdio.h>

void main() {

    int arr[10],sum=0;

    for(int i=0;i<=9;i++) {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg = sum/10;
    printf("the sum : %d\n",sum);
    printf("the avg : %d",avg);

}
