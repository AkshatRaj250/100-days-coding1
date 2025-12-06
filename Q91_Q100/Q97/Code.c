#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nInitials: ");

    // First character should be printed if it's a letter
    if (isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
    }

    // Loop to find characters after a space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i-1] == ' ' && isalpha(name[i])) {
            printf("%c.", toupper(name[i]));
        }
    }

    printf("\n");

    return 0;
}
