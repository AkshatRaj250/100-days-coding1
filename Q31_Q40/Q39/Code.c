//Q39. Write a program to find the product of odd digits of a number.

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#define MAX_DIGITS (sizeof(int) * CHAR_BIT)

bool is_odd(int digit) {
    return digit % 2 != 0;
}
int main(){
    int num, product = 1, found_odd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0){
        printf("Product of odd digits: 0\n");
        return 0;
    }
    while(num > 0){
        int digit = num % 10;
        if(is_odd(digit)){
            product *= digit;
            found_odd = 1;
        }
        num = num / 10;
    }
    if(found_odd){
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }
    return 0;
}