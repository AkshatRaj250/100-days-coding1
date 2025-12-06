#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");
    for (int i = 0; i < n; i++) {
        int prevGreater = -1; // default if no greater element exists
        // Look to the left of arr[i]
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // nearest greater found
            }
        }
        printf("%d", prevGreater);
        if (i != n - 1)
            printf(", "); // comma separated
    }
    printf("\n");

    return 0;
}
