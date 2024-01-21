#include<stdio.h>
void main()
{
    printf("plese select option \n 1 = maaths and science \n 2 = only science \n 3 = only maths  ");

    int number = 0 ;
    printf("\n \n Enter your option ");
    scanf("%d",&number);

    //check

        if (number== 1 )
        {
            printf(" congo. your maths and science marks is 45");
        }
        else if (number== 2 )
        {
            printf(" congo. your science marks is 15");
        }
        else if (number== 3 )
        {
            printf(" congo. your maths marks is 16");
        }
        else
        {
            printf(" inveled number");
        }

            printf("\n byy");   


}