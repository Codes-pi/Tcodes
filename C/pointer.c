#include <stdio.h>

int main() {
    int num = 5;        // a normal integer variable
    int *ptr;            // pointer declaration

    ptr = &num;          // store the address of num in ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in ptr (address): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
