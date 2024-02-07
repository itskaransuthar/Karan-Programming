// Print natural numbers from 1 to 100 but difference is 3

#include <stdio.h>

void main()
{
    printf("\nNatural numbers from 1 to 100 but difference is 3: ");

    for (int i = 1; i <= 100; i += 3)
    {
        printf("%d ", i);
    }

    printf("\n");
    // printf("%c", '\n');
}