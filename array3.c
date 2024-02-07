// Write a programe to take name as input and print is in reverse
// param => marap
// hello => olleh
#include <stdio.h>
void main()
{
    char name[25];
    int count = 0;
    int i = 0;

    printf("Enter your name : ");
    for (count = 0; count < 25; count++)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
         {
            break;
         }
    }
    printf("Reversed Name: ");

    // printf("%c", name[25]);
    // printf("%c", name[24]);
    // printf("%c", name[23]);

    for (i = count-1 ; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
}
