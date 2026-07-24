#include <stdio.h>

#define MAX 100   // maximum size of array

int main() {
    int arr[MAX], n, i, key, found = 0;

    // Step 1: Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // store at index i (starts from 0)
    }

    // Step 3: Input the element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Step 4: Linear Search (index starts from 0)
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;   // stop once found
        }
    }

    // Step 5: If not found
    if (!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
