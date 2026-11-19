#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // strcpy: Copy string
    strcpy(str1, "Hello World!");
    printf("str1 after strcpy: %s\n", str1);

    // strlen: Length of a string
    printf("Length of str1: %lu\n", strlen(str1));

    // strcat: Concatenate two strings
    strcpy(str2, " How are you?");
    strcat(str1, str2);
    printf("str1 after strcat: %s\n", str1);

    // strrev: Reverse the string
    strrev(str1);
    printf("str1 after strrev: %s\n", str1);

    // strcmp: Compare two strings
    int result = strcmp("hello", "world");
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is less than second.\n");
    } else {
        printf("First string is greater than second.\n");
    }

    return 0;
}
