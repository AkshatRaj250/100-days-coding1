#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    char initials[10] = "";
    char *surname;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline at end if present
    name[strcspn(name, "\n")] = '\0';

    // Find last space (before surname)
    surname = strrchr(name, ' ');

    if (surname == NULL) {
        // No spaces, only one word
        printf("Name: %s\n", name);
        return 0;
    }

    // Print initials of first and middle names
    for (char *ptr = name; ptr < surname; ptr++) {
        if (ptr == name && isalpha(*ptr)) {
            printf("%c.", toupper(*ptr));
        } else if (*(ptr - 1) == ' ' && isalpha(*ptr)) {
            printf("%c.", toupper(*ptr));
        }
    }

    // Print full surname
    printf(" %s\n", surname + 1);  // +1 to skip the space

    return 0;
}
