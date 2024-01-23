//Write a programe to create a calc
// ->addition
// ->subtraction
// ->mulitplication
// ->division
// ->modulus
// ->min
// ->max
// ->equality//



#include<stdio.h>
void main()
{
        int number1,number2,sum,sub,mul,div,modu,min;

        printf("enter the number 1 tow digit\n");
        scanf("%d",&number1);

            if(number1 < 10 || number1 > 99)
            {

                printf("enter tow digit number\n ");
            }

        printf("enter the  number 2 tow digit\n");
        scanf("%d",&number1);

        if(number2 < 10 || number2 > 99)
            {

                printf("enter tow digit number\n ");
            }

            sum = number1 + number2;
            sub = number1 - number2;
            mul = number1 * number2;
            div = number1 / number2;
            min = number1 + number2 / 2 ;


            printf("Sum: %d\n", sum);
            printf("sub: %d\n", sub);
            printf("mul: %d\n", mul);
            printf("div: %d\n", div);
            printf("min: %d\n", min);
}