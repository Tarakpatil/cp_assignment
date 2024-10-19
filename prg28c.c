#include <stdio.h>
#include <string.h>

// with using function
void main() {

	char str1[30],str2[30];

	printf("Enter the string : ");
	gets(str1);

	strcpy(str2,str1);

	printf("Copied string : %s",str2);
}