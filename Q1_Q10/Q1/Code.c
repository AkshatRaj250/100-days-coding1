//Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>

int main()
{
    int a,b,sum;
    //prompt for input of two number
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    //promt for sum 
    sum = a+b;

    //displaying the result
    printf("Sum: %d\n", sum);
    
    return 0;
}