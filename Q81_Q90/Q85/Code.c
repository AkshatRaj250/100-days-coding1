//Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length manually
    while (str[len] != '\0') {
        len++;
    }

    // ignore trailing newline from fgets
    if (str[len - 1] == '\n') {
        len--;
    }

    // reverse string using two-pointer method
    i = 0;
    j = len - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
