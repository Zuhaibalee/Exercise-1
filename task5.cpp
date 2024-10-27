#include <stdio.h>
int main() {
    int choice;
    float temperature;
	float converted_temp;

    printf("1: Celsius to Fahrenheit\n2: Fahrenheit to Celsius\nEnter Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter Temperature in Celsius: ");
        scanf("%f", &temperature);
        converted_temp = temperature * (9.0 / 5) + 32;
        printf("Temperature in Fahrenheit: %f\n", converted_temp);
    }
    else if (choice == 2) {
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        converted_temp = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %f\n", converted_temp);
    }
    else {
        printf("Invalid choice.\n");
    }
}
