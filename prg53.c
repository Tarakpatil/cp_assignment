#include <stdio.h>

int main() {
    FILE *filePtr;
    char ch;

    filePtr = fopen("student_info.txt", "r");

    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while ((ch = getc(filePtr)) != EOF) {
        putchar(ch);
    }

    fclose(filePtr);

    return 0;
}
