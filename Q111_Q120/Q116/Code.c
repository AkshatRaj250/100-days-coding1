#include <stdio.h>

int main() {
    int n, target;

    // Input size and array elements
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target value
    printf("Enter target: ");
    scanf("%d", &target);

    // Find two indices whose sum equals target
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    // If no pair found
    printf("-1 -1");

    return 0;
}
