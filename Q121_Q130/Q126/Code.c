#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[200];

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("\n--- File Contents ---\n\n");

    // Read and display content
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close file
    fclose(fp);

    return 0;
}
