#include <stdio.h>

#define MAX 50   // maximum size for rows and columns

int main() {
    int arr[MAX][MAX];   // declare a 2D array
    int rows, cols, i, j;

    // Step 1: Input size of array
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Step 2: Input elements into the 2D array
    // Nested loops: outer loop for rows, inner loop for columns
    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);   // store each element at position [i][j]
        }
    }

    // Step 3: Display elements of the 2D array
    // Again use nested loops to print in matrix form
    printf("\nArray elements are:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);  // print element at [i][j]
        }
        printf("\n");   // move to next line after each row
    }

    return 0;
}
