// Write a programe to findout how many days a given month using switch case

#include <stdio.h>
void main()
{
     int month = 0;
     int day = 0;
     printf("Enter value of month ");
     scanf("%d", &month);

     switch (month)
     {
     case 1:    
          printf("this number is sunday ");
          break;

     case 2:
          printf("this number is monday  ");
          break;

     case 3:
          printf("this number is tuesday  ");
          break;

     case 4:
          printf("This number is wednesday");
          break;

     case 5:
          printf("This number is thureday");
          break;

     case 6:
          printf("This month has 30 days ");
          break;

     case 7:
          printf("This month has 31 days ");
          break;

     case 8:
          printf("This month has 31 days ");
          break;

     case 9:
          printf("This month has 30 days ");
          break;

     case 10:
          printf("This month has 31 days ");
          break;

     case 11:
          printf("This month has 30 days ");
          break;

     case 12:
          printf("This month has 31 days ");
          break;

     default:
          printf("Invalid month ");
          break;
     }

     printf("\nGoodbyee...");
}