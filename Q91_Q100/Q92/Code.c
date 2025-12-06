#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // To store frequency of each lowercase alphabet

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {  // Count only lowercase alphabets
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) { // Found the first repeating alphabet
                printf("\nFirst repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }

    printf("\nNo repeating lowercase alphabet found.\n");

    return 0;
}
