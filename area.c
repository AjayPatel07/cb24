#include<stdio.h>
void main()
{
    float height = 0;
    float base = 0;
    float answer = 0;

    printf("enter value of height");
    scanf("%f",&height); 

    printf("enter value of base");
    scanf("%f",&base);

    answer = height * base / 2;
    printf("the value of answer is %f", answer);

}