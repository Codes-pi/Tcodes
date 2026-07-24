#include <stdio.h>

int main() {
    int num;

    // Step 1: Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Check even or odd using modulus operator
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}
