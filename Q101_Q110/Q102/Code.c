#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;   // possible ceil
            right = mid - 1;   // search on left for first occurrence
        } else {
            left = mid + 1;
        }
    }

    return ceilIndex;
}

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("Index of ceil of %d: %d\n", x, index);

    return 0;
}
