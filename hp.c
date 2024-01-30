#include <stdio.h>
int main()
{
    int a ;
    int b = 1;
    int c ;
    printf("enter size of pattern \n");
    scanf("%d", &a);
    while (b <= a)

    {
        c = 1;
        while (c <= b)
        {
            printf("*");
            // printf("\n");
            c = c + 1;
        }
        
         printf("\n");
         b = b + 1;
    }
    //  printf("*");
    //  printf("*");
     
    // printf("\n");
}