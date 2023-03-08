#include <stdio.h>

int main() {
    // declare and initialize the array
    int a[2][3] = {{10, 20, 30}, {40, 50, 60}};

    // declare loop variables
    int i, j;

    // print the values
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}
