#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    float sum = 0;

    // Open the file
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: numbers.txt not found!\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file.\n");
        return 0;
    }

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", sum / count);

    return 0;
}
