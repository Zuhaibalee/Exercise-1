#include<stdio.h>
int main() {
    int amount;
    printf("Enter Total Shopping Amount: ");
    scanf("%d", &amount);

    if (amount > 5000) {
        amount = amount * 0.8;
        printf("After Discount, Your total is: %d\n", amount);
    }
    else if (amount > 3000 && amount <= 5000) {
        amount = amount * 0.9;
        printf("After Discount, Your total is: %d\n", amount);
    }
    else {
        printf("Sorry, No Discount for You. Your total is: %d\n", amount);
    }
}

