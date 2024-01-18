#include <stdio.h>

void main()
{
    printf("%i\n", 10 % 3);                 // 1
    printf("%d\n", 10 - (10 / 3) * 3);      // 1

    printf("%i\n", 10 % -3);                // 1
    printf("%i\n", 10 - (10 / -3) * -3);    // 1

    printf("%i\n", -10 % 3);                // -1
    printf("%i\n", -10 - (-10 / 3) * 3);    // -1

    printf("%i\n", -10 % -3);               // -1
    printf("%i\n", -10 - (-10 / -3) * -3);  // -1
}