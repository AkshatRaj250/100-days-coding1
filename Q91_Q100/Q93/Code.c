#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of characters in first string
    for (int i = 0; str1[i] != '\0'; i++) {
        char ch = tolower(str1[i]);
        if (ch >= 'a' && ch <= 'z')
            freq1[ch - 'a']++;
    }

    // Count frequency of characters in second string
    for (int i = 0; str2[i] != '\0'; i++) {
        char ch = tolower(str2[i]);
        if (ch >= 'a' && ch <= 'z')
            freq2[ch - 'a']++;
    }

    // Compare both frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("\nThe strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("\nThe strings ARE anagrams.\n");

    return 0;
}
