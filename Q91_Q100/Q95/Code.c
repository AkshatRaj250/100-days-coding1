#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("\nNot a rotation (lengths differ).\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 exists inside concatenated string
    if (strstr(temp, str2) != NULL)
        printf("\nThe strings ARE rotations of each other.\n");
    else
        printf("\nThe strings are NOT rotations.\n");

    return 0;
}
