#include <stdio.h>
void main()
{
    int number1 = 2;

    while (number1 <= 500)
    {
        printf("%d\t", number1);
        number1 += 2;
    }

    int number2 = 1;
    printf("\n\n");
    while (number2 <= 500)
    {
        printf(" %d\t", number2);
        number2 += 2;
    }
}