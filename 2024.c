#include<stdio.h>
void main()
{
        int number1= 22;
        int number2= 50;
        int number3= 0;

        number3 = number1;
        number1 = number2;
        number2 = number3;

        printf("the value of number 1 is %d and number 2 is %d", number1,number2);
        
}