#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n+1];  // To track occurrences (assuming values are between 0 to n)

    // Initialize frequency array to 0
    for(int i = 0; i <= n; i++)
        freq[i] = 0;

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // If number already repeated
        if(freq[arr[i]] == 1) {
            printf("Repeated element: %d", arr[i]);
            return 0;
        }

        freq[arr[i]]++;
    }

    // If no repetition found
    printf("No repeated element found");

    return 0;
}
