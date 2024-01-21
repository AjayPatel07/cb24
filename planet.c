#include<stdio.h>
void main()
{
    char letter = ' ';

    printf("Enter any alfabet ( a to h )planet");
    scanf("%C",&letter);

        if(letter=='a')
            {
                printf("sun to Mercury distance == 57,900,000 km");
            }            
        else if(letter=='b')
            {
                printf("sun to Venus distance == 108,200,000 km ");
            }            
        else if(letter=='c')
            {
                printf("sun to Earth distance == 149,600,000 km ");
            }
        else if(letter=='d')
            {
                printf("sun to Mars distance == 227,900,000 km ");
            }
        else if(letter=='e')
            {
                printf("sun to Jupiter distance == 778,600,000 km ");
            }
        else if(letter=='f')
            {
                printf("sun to Saturn distance == 1,433,500,000 km ");
            }            
        else if(letter=='g')
            {
                printf("sun to Uranus distance == 2,872,500,000 km ");
            }            
        else if(letter=='h')
            {
                printf("sun to Neptune distance == 4,495,100,000 km ");
            }
        else 
            {
                printf("  NOT EXIST ");
            }
}