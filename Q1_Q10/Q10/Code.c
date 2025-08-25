//Q10. Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert to hours, minutes, and seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display the result
    printf("Time in HH:MM:SS format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}