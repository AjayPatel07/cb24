#include<stdio.h>
void main()
{
    int number = 0;

    printf("Enter any number");
    scanf("%d",&number);

    // check 

    if ( number % 2 == 1 )
     {
          printf("Number is odd ");
     }
     else{
            printf("unknon number ");
     }
}