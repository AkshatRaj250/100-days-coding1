#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Menu:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD:
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case SUBTRACT:
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case MULTIPLY:
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
