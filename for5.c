// Write a programe to print following pattern
// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000


#include<stdio.h>
void main(){
int a=1;
int d=1;
while (a<=3015)
{
    printf("%d\t",a);
    d+=3;
    a=a+d;
}



}