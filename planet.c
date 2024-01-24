#include <stdio.h>
void main()
{
    int number=0;
    int list=0;

    printf("Enter any planet number \n1\n2\n3\n4\n5\n6\n7\n8\n");
    scanf("%d", &number);

        
    if (number == 1)
    {
        printf("sun to Mercury distance == 57,900,000 km");
    }
    else if (number == 2)
    {
        printf("sun to Venus distance == 108,200,000 km ");
    }
    else if (number == 3)
    {
        printf("sun to Earth distance == 149,600,000 km ");
    }
    else if (number == 4)
    {
        printf("sun to Mars distance == 227,900,000 km ");
    }
    else if (number == 5)
    {
        printf("sun to Jupiter distance == 778,600,000 km ");
    }
    else if (number== 6)
    {
        printf("sun to Saturn distance == 1,433,500,000 km ");
    }
    else if (number == 7)
    {
        printf("sun to Uranus distance == 2,872,500,000 km ");
    }
    else if (number ==8 )
    {
        printf("sun to Neptune distance == 4,495,100,000 km ");
    }
    else
    {
        printf("  NOT EXIST ");
    }
}