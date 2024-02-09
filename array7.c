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
        printf("\nEnter run for match %d : \n\n", match + 1);
        int total = 0;
        for (run = 0; run < 5; run++)
        {
            printf("Enter run %d : ", run + 1);
            scanf("%d", &crickerts[match][run]);
            total = total + crickerts[match][run];
             alltotal =alltotal + crickerts[match][run];
        }
        printf("\ntotal run is %d: %d\n", match + 1, total);
    }
    
//   
//     for (match = 0; match < 5; match++) {
//         for (run = 0; run < 5; run++) {
//           printf("enter the numer ")
//         }
//     }
    printf("\n Total run for all crickerts: %d\n", alltotal);


}
