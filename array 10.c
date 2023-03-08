include <stdio.h>

int main() {
    // declare an array, a loop variable, and the number to search
    int a[5], i, search;

    // declare another variable to keep track of the index where
    // the number was found.
    int pos = -1;

    printf("Enter five numbers:\n");

    // read each number from the user
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search for:\n");
    scanf("%d", &search);

    // iterate over the array to find the element
    for (i = 0; i < 5; i++) {
        // is the current element equal to the number?
        if (a[i] == search) {
            // note down the new position
            pos = i;
            // break out of the loop.
            break;
        }
    }

    if (pos == -1) {
        printf("%d was not found\n", search);
    } else {
        printf("%d was found at position %d\n", search, pos);
    }

    return 0;
}
