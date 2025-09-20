//Q31. Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
#include <limits.h>
#include <math.h>
#define MAX_BITS (sizeof(int) * CHAR_BIT)
int main(){
    int num, binary[MAX_BITS], i=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num==0){
        printf("Binary representation: 0\n");
        return 0;
    }
    while(num>0){
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary representation: ");
    for(int j=i-1; j>=0; j--){
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}
