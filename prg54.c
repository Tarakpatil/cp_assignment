#include <stdio.h>

int main() {
    FILE *filePtr;
    char name[50];
    char str[100];

    filePtr = fopen("output.txt", "w");

    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    puts("Writing string to file using puts:");
    puts(str);
    fputs(str, filePtr);

    printf("Enter a name character by character: ");
    for (int i = 0; (name[i] = getchar()) != '\n'; i++) {
        putc(name[i], filePtr);
    }

    fclose(filePtr);

    printf("Data written to 'output.txt'.\n");

    return 0;
}
