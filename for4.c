// Write a programe to print following pattern
// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000

// Write a programe to findout factorial of given number
//  number! = number × (number – 1) × (number – 2) × … × 1 = number × (number – 1)!
#include <stdio.h>
void main()
{
    int factorial = 1 , number;
    printf("ENter number of Factorial: ");
    scanf("%d", &number);
    if (number < 0 || number >=11)
    {
        printf("not exist");
    }

  else if (number == 0)
    {
        printf("1");
    }
    
    else if (number<11)
    {
     for (int i = 1; i <= number; i++)

        {
            factorial = factorial * i;
        }
        printf("%d", factorial);
    }
    
    {
        

        //  answer = number * (number - temp);
        //  printf("%d\number", answer);

        //         answer = answer * (number - 2);
        //         printf("%d\number", answer);

        //         answer = answer * (number - 3);
        //         printf("%d\number", answer);
        //         answer = answer * (number - 4);
        //         printf("%d\number", answer);
        //         answer = answer * (number - 5);
        //         printf("%d\number", answer);
        //         answer = answer * (number - 6);
        //         printf("%d\number", answer);
        //         answer = answer * (number - 7);
        //         printf("%d\number", answer);
        //         answer = answer * (number - 8);
        //         printf("%d\number", answer);
        //         answer = answer * (number - 9);
        //         printf("%d\number", answer);
    }
}
