#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];

    // Step 1: Compute prefix products
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;  // product of elements before i
        prefix *= nums[i];
    }

    // Step 2: Multiply with suffix products
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix; // multiply by product of elements after i
        suffix *= nums[i];
    }

    // Print result
    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
