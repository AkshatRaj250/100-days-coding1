#include <stdio.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Take input
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    int g;
    scanf("%d", &g);
    p.gender = g;

    // Display information
    printf("\nName: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: ");
    switch(p.gender) {
        case MALE:   printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER:  printf("OTHER\n"); break;
        default:     printf("UNKNOWN\n");
    }

    return 0;
}
