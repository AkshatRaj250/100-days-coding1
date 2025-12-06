#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open file
    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    // Read characters until EOF
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);  // Convert to lowercase for easy comparison

        if (ch >= 'a' && ch <= 'z') {  // Check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
