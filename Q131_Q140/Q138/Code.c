#include <stdio.h>

enum UserRole {
    ADMIN = 5,  // Example: start from 5
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    printf("Enum names with their integer values:\n\n");

    for(role = ADMIN; role <= GUEST; role++) {
        switch(role) {
            case ADMIN:
                printf("ADMIN = %d\n", role);
                break;
            case USER:
                printf("USER = %d\n", role);
                break;
            case GUEST:
                printf("GUEST = %d\n", role);
                break;
        }
    }

    return 0;
}
