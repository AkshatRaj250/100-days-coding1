#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("k cannot be greater than array size.\n");
        return 1;
    }

    printf("First negative in each subarray of size %d: ", k);

    // Iterate over each window of size k
    for (int i = 0; i <= n - k; i++) {
        int found = 0; // flag to check if negative found
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; // first negative found, stop checking this window
            }
        }
        if (!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}
