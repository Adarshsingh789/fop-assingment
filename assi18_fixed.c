#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100], rev[100];
    int i, len;

    printf("Enter string: ");
    scanf("%99s", str);   // limit input to avoid buffer overflow

    len = strlen(str);
    printf("Length = %d\n", len);

    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reverse = %s\n", rev);

    // Palindrome check
    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // Second string operations
    printf("Enter second string: ");
    scanf("%99s", str2);

    // String comparison
    if (strcmp(str, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // Substring check
    if (strstr(str, str2) != NULL)
        printf("\"%s\" is a substring of \"%s\"\n", str2, str);
    else
        printf("\"%s\" is not a substring of \"%s\"\n", str2, str);

    return 0;
}
