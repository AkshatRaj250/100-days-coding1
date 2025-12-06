#include <stdio.h>

enum Status {
    SUCCESS = 100,
    FAILURE = 200,
    TIMEOUT = 300
};

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
