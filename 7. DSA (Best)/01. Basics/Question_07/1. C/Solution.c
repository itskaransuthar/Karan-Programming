// Calculate power of a positive integer

#include <stdio.h>

void main()
{
    int num, p, ans;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("Enter a power: ");
    scanf("%d", &p);

    ans = num;
    for (int i = 0; i < p - 1; i++)
    {
        ans *= num;
    }

    printf("\n%d^%d = %d\n", num, p, ans);
}