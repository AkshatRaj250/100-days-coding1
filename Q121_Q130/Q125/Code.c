#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Clear input buffer before taking line input
    getchar();

    // Take new line to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    // Close file
    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}
