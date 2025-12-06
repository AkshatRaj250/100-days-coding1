#include <stdio.h>

int main() {
    int m, n;

    // Input sizes
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], merged[m+n];

    // Input first sorted array
    printf("Enter %d sorted elements:\n", m);
    for(int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    // Input second sorted array
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int i = 0, j = 0, k = 0;

    // Merge using two pointers
    while(i < m && j < n) {
        if(arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements (if any)
    while(i < m)
        merged[k++] = arr1[i++];

    while(j < n)
        merged[k++] = arr2[j++];

    // Output result
    printf("Merged sorted array:\n");
    for(int x = 0; x < m + n; x++)
        printf("%d ", merged[x]);

    return 0;
}
