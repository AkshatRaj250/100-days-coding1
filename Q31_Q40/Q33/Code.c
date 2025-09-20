//Q33. Write a program to check if a number is an Armstrong number.

#include<stdio.h>
int main()
{
    int n, r, sum=0, temp;
    //Input value of n
    printf("Enter the number: ");
    scanf("%d", &n);

    //for storing the Orginal number for later comparison
    temp = n;

    //Calculate the cube and sum of the number
    while (n>0)
    {
        //extraction of last digit
        r = n%10;

        //Add the cube of the digit to the sum
        sum = sum + (r*r*r);

        //removing last digit of the number
        n = n/10;
    }
    
    // Check if the original number equals the sum of cubes of its digits
    if (temp==sum)
    {
        printf("It is an Armstrong Number\n");
    }
    else {
        printf("Not an Armstrong number");
    }
    
    return 0;
}