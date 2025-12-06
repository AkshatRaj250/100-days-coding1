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

    printf("Next greater elements: ");
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // default if no greater element exists
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // nearest greater found
            }
        }
        printf("%d", nextGreater);
        if (i != n - 1)
            printf(", "); // comma separated
    }
    printf("\n");

    return 0;
}
