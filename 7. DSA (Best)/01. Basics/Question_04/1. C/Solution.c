// Print alphabets from 'z' to 'a'

#include <stdio.h>

void main()
{
    printf("\nPrinting Alphabets: ");

    for (char ch = 'z'; ch >= 'a'; ch--)
    {
        printf("%c ", ch);
    }

    printf("\n");
}