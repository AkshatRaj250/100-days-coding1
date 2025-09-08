//Q22. Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;
    
    // User input
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);
    
    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", (profit / costPrice) * 100);
    } else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", (loss / costPrice) * 100);
    } else {
        printf("No profit, no loss.\n");
    }
    
    return 0;
}