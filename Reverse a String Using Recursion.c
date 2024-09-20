#include <stdio.h>
#include <string.h>

void reverse(const char *str) {
    if (*str) {
        reverse(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char str[] = "Hello";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    reverse(str);
    printf("\n");
    return 0;
}

