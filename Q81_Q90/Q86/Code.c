//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length manually
    while (str[len] != '\0') {
        len++;
    }

    // remove trailing newline from fgets
    if (str[len - 1] == '\n') {
        len--;
    }

    // set j to last character index
    j = len - 1;

    // compare characters from both ends
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
