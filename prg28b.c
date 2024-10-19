#include <stdio.h>

// without using a inbuilt function
void main() {

	char str1[30],str2[30];

	int i=0;

	printf("Enter the string : ");

	gets(str1);

	while(str1[i] != '\0') {

		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';

	printf("The copied string is %s\n",str2);

}

