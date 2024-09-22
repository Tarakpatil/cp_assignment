// (21) Program to find maximum number in given Array.

#include <stdio.h>

void main() {

    int arr[10],max;

    for(int i=0;i<=9;i++) {
        printf("Enter the number in array : ");
        scanf("%d",&arr[i]);
    }

    max = arr[0];

    for(int i=0;i<=9;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    printf("the maximum number of array is :%d", max);
}