
#include <stdio.h>
void main()
{
    int month, day;

    printf("Enter value of month\n ");
    scanf("%d", &month);

    if (month < 1 || month > 12)
    {
        printf("inveled month input\n");
    }
    else
    {

        printf("Enter value of day\n ");
        scanf("%d", &day);
    }

    if (day < 1 || day > 31)
    {
        printf("inveled day input");
    }
    else
    {
        if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        {
            printf("......................................................\nYour zodiac sign is Aquarius.\n");
        }
        else if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        {
            printf(".....................................................\nYour zodiac sign is Aries.\n");
        }
        else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        {
            printf(".....................................................\nYour zodiac sign is Taurus.\n");
        }
        else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        {
            printf(".....................................................\nYour zodiac sign is Gemini.\n");
        }
        else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        {
            printf(".....................................................\nYour zodiac sign is Cancer.\n");
        }
        else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        {
            printf(".....................................................\nYour zodiac sign is Leo.\n");
        }
        else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        {
            printf(".....................................................\nYour zodiac sign is Virgo.\n");
        }
        else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        {
            printf(".....................................................\nYour zodiac sign is Libra.\n");
        }
        else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        {
            printf(".....................................................\nYour zodiac sign is Scorpio.\n");
        }
        else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        {
            printf(".....................................................\nYour zodiac sign is Sagittarius.\n");
        }
        else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        {
            printf(".....................................................\nYour zodiac sign is Capricorn.\n");
        }
        else
        {
            printf(".....................................................\nYour zodiac sign is note exist \n");
        }
    }
    printf("\n.....................................................\n");
}