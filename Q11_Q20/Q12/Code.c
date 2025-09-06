//Q12. Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>

int main()
{
	int num;

    //user input
	printf("Enter an integer: ");
	scanf("%d", &num);

    //checking whether the number is positive, negative or zero
	if (num >= 0)
	{
		if (num == 0)
			printf("The number is zero.\n");
		else
			printf("The number is positive.\n");
	}
	else
	{
		printf("The number is negative.\n");
	}
	return 0;
}