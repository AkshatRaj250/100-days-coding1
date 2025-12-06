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

    printf("Maximum elements in each subarray of size %d: ", k);

    // Iterate over each window of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i]; // assume first element in window is max
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
