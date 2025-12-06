#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    // Check if the file exists / opened successfully
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read and print file content line by line until EOF
    printf("File contents:\n\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close file
    fclose(fp);

    return 0;
}
