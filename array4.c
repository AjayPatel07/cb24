#include <stdio.h>
void main()
{
    int a[5];
    int i;
    int j;
    int temp;

    for (i = 0; i < 5; i++)
    {
        printf("enter number %d :",i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf(" Array element : ");
    for(i=0; i<5; i++)
    {
        printf("%d,\t",a[i]);

    }






}
