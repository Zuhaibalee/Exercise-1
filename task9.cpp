#include<stdio.h>
int main() {
    int principal, rate, time;
    float interest;

    printf("Enter Principal Amount: ");
    scanf("%d", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%d", &rate);
    printf("Enter Time (in years): ");
    scanf("%d", &time);

    interest = (principal * rate * time) / 100.0;
    printf("The Simple Interest is: %f", interest);
}
