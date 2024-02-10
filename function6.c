#include <stdio.h>

float footToMeter(int foot)
{
     return foot / 3.281;
}
float inchToMeter(int inch)
{
     return inch / 39.37;
}
float getAddition(int foot, int inch)
{
     float answer = 0;
     answer = footToMeter(foot) + inchToMeter(inch);
     return answer;
}
float getBmi(int foot, int inch, float weight)
{
     return weight / (getAddition(foot, inch) * getAddition(foot, inch));
}
float getweight(float weight){
      if(weight<=0){ printf("\nyour enter weight is not velid \n");}
      else if(weight >= 1 && weight <= 18.5){ printf("\nyour enter weight is UNDERWEIGHT\n ");}
      else if(weight >= 18.6 && weight <= 24.9){ printf("\nyour enter weight is NORMAL\n ");}
      else if(weight >= 25.0 && weight <= 29.9){ printf("\nyour enter weight is OVERWEIGHT \n");}
      else if(weight >= 30.0 && weight <= 34.9){ printf("\nyour enter weight is OBESE\n ");}
      else if(35<=weight ){ printf("\nyour enter weight is EXTREMLY OBESE\n ");}
              else {
        return weight;
    }
}

void main()
{
     float weight = 0;
     int foot = 0;
     int inch = 0;
     float bmi = 0;
     printf("Enter value of weight ");
     scanf("%f", &weight);
     printf("Enter value of foot ");
     scanf("%d", &foot);
     printf("Enter value of inch ");
     scanf("%d", &inch);

     bmi = getBmi(foot, inch, weight);
     printf("The value of bmi is %f \n", bmi);
       getweight(weight);
}