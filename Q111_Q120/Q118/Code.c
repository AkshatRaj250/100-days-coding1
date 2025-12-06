#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], sum = 0;

    printf("Enter %d elements (numbers between 0 and %d):\n", n, n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Expected sum of numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;

    int missing = expectedSum - sum;

    printf("Missing number: %d", missing);

    return 0;
}
