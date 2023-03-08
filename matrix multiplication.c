#include <stdio.h>

int main() {
    // declare a two-dimensional array, and variables
    // for the number of rows and columns. there are
    // also two loop variables i and j.
    int a[10][10], rows, cols, i, j;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);

    printf("Enter the number of columns:\n");
    scanf("%d", &cols);

    // check if the number of rows/columns requested
    // is too large or too small
    if (rows < 1 || cols < 1 || rows > 10 || cols > 10) {
        printf("Invalid number of rows or columns\n");
        // exit the program
        return 0;
    }

    // ask for the numbers
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // array index starts from 0, but row or
            // column number starts from 1.
            printf("Enter row %i, column %i:\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Contents of the array are:\n");

    // print the numbers
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        
        // to seperate the rows
        printf("\n");
    }

    return 0;
}
