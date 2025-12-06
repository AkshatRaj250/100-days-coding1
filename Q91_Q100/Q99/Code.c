#include <stdio.h>
#include <stdlib.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date in dd/mm/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Parse the date
    if (sscanf(date, "%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid date format!\n");
        return 1;
    }

    // Validate month
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    printf("Date in dd-MMM-yyyy format: %02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
