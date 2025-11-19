//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char s[] = "hello world";
    int count = 0;

    while (s[count] != '\0') {
        count++;
    }

    printf("Character count: %d", count);
    return 0;
}
