#include<stdio.h>

int main() {
    int num1, num2;
    char oper;
    int sum, sub, mul, div;

    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);
    printf("Enter Operator: (+ - * /) ");
    scanf(" %c", &oper);

    if (oper == '+') {
        sum = num1 + num2;
        printf("Sum of num1 and num2 is: %d", sum);
    }
    else if (oper == '-') {
        sub = num1 - num2;
        printf("Sub of num1 and num2 is: %d", sub);
    }
    else if (oper == '*') {
        mul = num1 * num2;
        printf("Mul of num1 and num2 is: %d", mul);
    }
    else if (oper == '/') {
        div = num1 / num2;
        printf("Div of num1 and num2 is: %d", div);
    }
}
