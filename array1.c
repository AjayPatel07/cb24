#include <stdio.h>
void main()
{
    int run[5];
    int i;
    int ans;
    int avereg;

        // printf("run totAl is: %d\n", &ans);
    //  avereg = ans / 5;
    //  printf("run avereg is: %d", &avereg);

    //     for (i=0;i<5;i++)
    //    {
    //         printf("enter  kohali run %d \n",run[5]);
    //     }

    //     scanf("%d",iun[0]);
    //
    //     printf("enter your 2 crecater run: %d ",&run[1]);
    //     scanf("%d",run[1]);
    //
    //     printf("enter your 3 crecater run: %d ",&run[2]);
    //     scanf("%d",run[2]);
    //
    //     printf("enter your 4 crecater run: %d ",&run[3]);
    //     scanf("%d",run[3]);
    //
    //     printf("enter your 5 crecater run: %d ",&run[4]);
    //     scanf("%d",run[4]);

    //
    //  printf("enter your 0 crecater run: %d",&iun[0]);
    //     // scanf("%d",iun[0]);
    //
    //     printf("enter your 2 crecater run: %d ",&run[1]);
    //    // scanf("%d",run[1]);
    //
    //     printf("enter your 3 crecater run: %d ",&run[2]);
    //    // scanf("%d",run[2]);
    //
    //     printf("enter your 4 crecater run: %d ",&run[3]);
    //     //scanf("%d",run[3]);
    //
    //     printf("enter your 5 crecater run: %d ",&run[4]);
    //     //scanf("%d",run[4]);

    //     for (i=0;i<5;i++)
    //    {
    //         printf("enter  kohali run %d \n",run[5]);
    //     }


    for (i = 0; i < 5; i++)
    {
        printf("Enter your run %d: ", i + 1);
        scanf("%d", &run[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("You entered the number %d\n", run[i]);
    }

    // ans = i + i+1;
    // for (i = 0; i < 5; i++)
    // {
    //     ans += run[i];
    //     //i++;
    // }

    ans = run[0] + run[1];

    for (i = 2; i < 5; i++)
    {
        ans = ans + run[i];
    }
   printf("total is : %d\n", ans);

    avereg = ans / 5;

    printf("averag of your input marks %d: ", avereg);

    
}