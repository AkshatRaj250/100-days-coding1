#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; // sum of numbers from 1 to n
    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = totalSum - ((x - 1) * x / 2); // sum from x to n

        if (leftSum == rightSum) {
            pivot = x;
            break; // leftmost pivot
        }
    }

    printf("Pivot integer: %d\n", pivot);

    return 0;
}
