//   Write a programe to store 5 crickerts runs for 5 runs and total
#include <stdio.h>
void main()
{
    int crickerts[5][5];
    int run = 0;
    int match = 0;
    int total = 0;
    int alltotal = 0;

    for (match = 0; match < 5; match++)
    {
        printf("\nEnter run  for cricketrts %d \n", match + 1);
        int total = 0;
        for (run = 0; run < 5; run++)
        {
            printf("Enter run  for match  %d ", run + 1);
            scanf("%d", &crickerts[match][run]);
            total =total + crickerts[match][run];
        }
        printf("Total marks for student %d: %d\n", match + 1, total);
    }

    for (match = 0; match < 5; match++)
    {
        printf("\nrun  for cricketrts %d ", match + 1);
        total = 0;
        for (run = 0; run < 5; run++)
        {
            printf("\nrun  for cricketrts %d = %d ", run + 1, crickerts[match][run]);
            total =total + crickerts[match][run];
        }
        printf("\n\nTotal marks for student %d: %d\n", match + 1, total);
    }



     
    for (match = 0; match < 5; match++) {
        for (run = 0; run < 5; run++) {
           alltotal =alltotal + crickerts[match][run];
        }
    }
    printf("\n Total run for all crickerts: %d\n", alltotal);

}


