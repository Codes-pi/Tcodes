#include <stdio.h>
// RECURSIVE STEP:
    // 1. num / 10: Remove the last digit from the current number (move to next digit)
    // 2. reversed * 10: Shift existing reversed digits to the left to make room
    // 3. num % 10: Extract the last digit of current num and add it to the end
    // The function calls itself with these updated values
int reverseNumber(int num, int reversed) {
    if (num == 0)
        return reversed;
    return reverseNumber(num / 10, reversed * 10 + num % 10);
}
int main() {
    int num, reversed;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    reversed = reverseNumber(num, 0);
    
    if (num == reversed)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
        
    return 0;
}   