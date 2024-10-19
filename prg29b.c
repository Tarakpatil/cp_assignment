#include <stdio.h>
#include <string.h>

// with using functions
void main() {

	char str1[30],str2[30];

	printf("Enter string1 : ");
	gets(str1);
	printf("Enter string2 : ");
	gets(str2);

	strcat(str1,str2);

	printf("the concatinated string is : %s",str1);

}