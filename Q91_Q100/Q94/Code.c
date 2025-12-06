#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200], longest[50], temp[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; i <= strlen(sentence); i++) {
        
        // If character is part of a word
        if (isalpha(sentence[i])) {
            temp[j++] = sentence[i];
        } else {
            temp[j] = '\0';  // End the current word

            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, temp);
            }
            j = 0; // Reset for next word
        }
    }

    if (maxLen > 0)
        printf("\nLongest word: %s\nLength: %d\n", longest, maxLen);
    else
        printf("\nNo valid word found.\n");

    return 0;
}
