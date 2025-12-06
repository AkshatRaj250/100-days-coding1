#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse characters within a word
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    int start = 0, i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Traverse through the string
    for (i = 0; i <= strlen(sentence); i++) {
        // Word boundary detected: space or end of string
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            reverse(sentence, start, i - 1);
            start = i + 1; // Move to next word
        }
    }

    printf("\nReversed words sentence: %s\n", sentence);

    return 0;
}
