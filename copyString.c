#include <stdio.h>

void copyString(char *source, char *dest) {
    if (*source) {
        *dest = *source;
        copyString(source + 1, dest + 1);
    } else {
        *dest = '\0';
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);  // Reads string including spaces
    copyString(str1, str2);
    printf("Copied string: %s\n", str2);
    return 0;
}

