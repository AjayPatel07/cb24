#include<stdio.h>
void main()
{
    float number = 0;
    int foot = 0;
    int  inch = 0; 

    float foot_meter = 0;
    float inch_meter = 0;
    float total_meter = 0;
    float bmi =0;

    printf("enter value of weight ");
    scanf("%f",&weight);

    printf("enter value of foot ");
    scanf("%d",&foot);

    printf("enter value of inch");
    scanf("%d",&inch);

    printf("the value of weight is %.2f inch is %d and food is %d",weight,inch);

    foot_meter = foot / 3.281;
    inch_meter = inch / 39.37;

    printf("\n the value of foot_meter is %f and inch_meter is %f ",foot_meter,inch_meter);

    total_meter = foot_meter + inch_meter;

    printf("\n the value of total_meter is %f ",total_meter);

    bmi = weight / (total_meter * total_meter);
    printf("\n the value of bmi is %f ",bmi);


    }