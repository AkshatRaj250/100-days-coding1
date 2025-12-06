#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;

    // Open source and destination files
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    // Check if file opened successfully
    if (input == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Read each character and convert to uppercase
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    // Close both files
    fclose(input);
    fclose(output);

    printf("Conversion complete. Output saved to output.txt\n");

    return 0;
}
