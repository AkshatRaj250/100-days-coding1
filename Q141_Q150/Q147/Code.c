#include <stdio.h>
#include <stdlib.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure
struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input employee details
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Joining Date (DD MM YYYY): ");
        scanf("%d %d %d", &emp[i].joining_date.day, &emp[i].joining_date.month, &emp[i].joining_date.year);
    }

    // Write employees to binary file
    fp = fopen("employees.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(emp, sizeof(struct Employee), n, fp);
    fclose(fp);
    printf("\nEmployee data saved to employees.dat\n");

    // Read employees from binary file
    fp = fopen("employees.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Employee readEmp;
    printf("\n--- Employee Details from File ---\n");
    while(fread(&readEmp, sizeof(struct Employee), 1, fp)) {
        printf("\nName: %s\n", readEmp.name);
        printf("Employee ID: %d\n", readEmp.emp_id);
        printf("Salary: %.2f\n", readEmp.salary);
        printf("Joining Date: %02d-%02d-%04d\n", readEmp.joining_date.day,
               readEmp.joining_date.month, readEmp.joining_date.year);
    }

    fclose(fp);

    return 0;
}
