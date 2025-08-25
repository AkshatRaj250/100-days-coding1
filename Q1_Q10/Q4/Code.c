//Q4. Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define Pi 3.14

int main()
{
    float area, radius, circumference;

    //Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    //Calculate Area & circumference
    area = Pi*radius*radius;
    circumference = 2*Pi*radius;

    //Output result
    printf("Area of the Circle: %.2f\n", area);
    printf("Circumference of the Circle: %.2f\n", circumference);

    return 0;
}