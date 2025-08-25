//Q9. Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    int n; // number of times interest is compounded per year

    //User input
    printf("Enter the Principal amount(P): ");
    scanf("%f", &principal);

    printf("Enter the Rate of interest (R) in %: ");
    scanf("%f", &rate);

    printf("Enter the Time period in years(T): ");
    scanf("%f", &time);

    printf("Enter number of times interest is compounded per year (n): ");
    scanf("%d", &n);

    // Simple Interest
    float simple_interest = (principal * rate * time) / 100;

    // Compound Interest
    float compound_amount = principal * pow((1 + rate / (100 * n)), n * time);
    float compound_interest = compound_amount - principal;

    printf("\n--- Interest Summary ---\n");
    printf("Simple Interest = ₹%.2f\n", simple_interest);
    printf("Compound Interest = ₹%.2f\n", compound_interest);
    printf("Total Amount with Compound Interest = ₹%.2f\n", compound_amount);

    return 0;
}