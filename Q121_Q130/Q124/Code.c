#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    int ch;

    // Take filenames from the user
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open files
    src = fopen(sourceFile, "r");
    dest = fopen(destFile, "w");

    // Check if source file exists
    if (src == NULL) {
        printf("Error: Source file not found!\n");
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close files
    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}
