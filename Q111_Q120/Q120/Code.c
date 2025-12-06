#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Convert first alphabetic character to uppercase
    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
