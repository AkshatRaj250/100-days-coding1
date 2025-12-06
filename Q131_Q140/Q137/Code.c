#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    // Loop through all roles
    for(role = ADMIN; role <= GUEST; role++) {
        switch(role) {
            case ADMIN:
                printf("ADMIN -> Full access granted.\n");
                break;
            case USER:
                printf("USER -> Limited access granted.\n");
                break;
            case GUEST:
                printf("GUEST -> Read-only access.\n");
                break;
        }
    }

    return 0;
}
