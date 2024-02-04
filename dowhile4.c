// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include <stdio.h>

int main()
{
    int n;
    int i = 1, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);


    do
    {
        j = 1;
        do
        {
            printf("%d ", i);
            j++;
        } while (j <= i);

        printf("\n");
        i++;
    } while (i <= n);
}