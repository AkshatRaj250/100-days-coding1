#include <stdio.h>

enum Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Months month;

    printf("Month\t\tDays\n");
    printf("----------------------\n");

    for(month = JANUARY; month <= DECEMBER; month++) {
        switch(month) {
            case JANUARY:   printf("January\t\t31\n"); break;
            case FEBRUARY:  printf("February\t28/29\n"); break;
            case MARCH:     printf("March\t\t31\n"); break;
            case APRIL:     printf("April\t\t30\n"); break;
            case MAY:       printf("May\t\t31\n"); break;
            case JUNE:      printf("June\t\t30\n"); break;
            case JULY:      printf("July\t\t31\n"); break;
            case AUGUST:    printf("August\t\t31\n"); break;
            case SEPTEMBER: printf("September\t30\n"); break;
            case OCTOBER:   printf("October\t\t31\n"); break;
            case NOVEMBER:  printf("November\t30\n"); break;
            case DECEMBER:  printf("December\t31\n"); break;
        }
    }

    return 0;
}
