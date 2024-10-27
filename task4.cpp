#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter Value for Num1: ");
    scanf("%d", &num1);
    printf("Enter Value for Num2: ");
    scanf("%d", &num2);
    printf("Enter Value for Num3: ");
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3)) {
        printf("Num1 is the largest number");
    }
    else if ((num2 > num1) && (num2 > num3)) {
        printf("Num2 is the largest number");
    }
    else {
        printf("Num3 is the largest number");
    }
}
