// January - 31 days
// February - 28 days in a common year and 29 days in leap years
// March - 31 days
// April - 30 days
// May - 31 days
// June - 30 days
// July - 31 days
// August - 31 days
// September - 30 days
// October - 31 days
// November - 30 days
// December - 31 days
// Write a programe to findout how many days a given month without else if && ||
#include <stdio.h>
void main()
{
    int month;

    printf("Enter value of month ");
    scanf("%d", &month);

    if (month < 1)
    {
        printf("Invalid!");
    }
    if (month > 13)
    {
        printf("Invalid!");
    }

    if (month > 0)
    {
        if (month <= 7)
        {
            if (month % 2 == 1)
            {
                printf("31 day %d", month);
            }

            if (month % 2 == 0)
            {
                if (month == 2)
                    printf("28 day %d", month);

                else
                    printf("30 day %d", month);
            }
        }
        if (month >= 8)
        {

            if (month % 2 == 1)
            {
                printf("30 day %d", month);
            }

            if (month % 2 == 0)
            {
                printf("31 day %d", month);
            }
        }
    }
    printf("\ngoodby..");
}