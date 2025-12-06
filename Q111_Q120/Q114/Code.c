#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    int freq[256] = {0}; // Frequency array for ASCII characters
    int start = 0;       // Left pointer of the window

    for (int end = 0; end < n; end++) {
        char current = s[end];
        freq[current]++;

        // If character repeats, move start pointer to remove duplicates
        while (freq[current] > 1) {
            freq[s[start]]--;
            start++;
        }

        int windowLen = end - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
