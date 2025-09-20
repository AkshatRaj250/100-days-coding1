//Q40. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <limits.h>
#include <math.h>
#define MAX_BITS (sizeof(int) * CHAR_BIT)
int main(){
    int num, binary[MAX_BITS], i=0;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    if(num==0){
        printf("1's complement: 1\n");
        return 0;
    }
    while(num>0){
        binary[i] = num % 10;
        num = num / 10;
        i++;
    }
    printf("1's complement: ");
    for(int j=i-1; j>=0; j--){
        printf("%d", binary[j] == 0 ? 1 : 0);
    }
    printf("\n");
    return 0;
} 