#include <stdio.h>

int main() 
{
    int a[6] = {10, 20, 30, 40};
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
