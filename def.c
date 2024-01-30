
// Write a programe to print following pattern
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 10000
#include <stdio.h>
void main()
{
    // int z = 0;
    // {
    //     printf("%d\t",z);
    // }



    int number1 = 0;
    int a;

    while (number1 <= 10000)
    {
        // number1 = number1 + a;
        // a++;

        printf("%d\t", number1);
        number1 = number1 + 1;

          number1 = number1 + a;
        a++;
    }
}




// Write a programe to print following pattern
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 10000
// #include <stdio.h>
// void main()
// {
// //     int z = 0;
// //     {
// //         printf("%d\t",z);
// //     }



//     int number1 = 0;
//     int a;

//     while (number1 <= 10000)
//     {
//         // number1 = number1 + a;
//         // a++;

//         printf("%d--\t%d\n ",a, number1);
//         number1 = number1 + 1;
//          number1 = number1 + a;
//         a++;
//     }
// }