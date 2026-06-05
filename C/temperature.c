#include <stdio.h>

int main() {
    int choice;
    double celsius, fahrenheit;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2lf C = %.2lf F\n", celsius, fahrenheit);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2lf F = %.2lf C\n", fahrenheit, celsius);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
