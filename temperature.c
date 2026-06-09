#include<stdio.h>
int main()
{
   float C,F;
    printf("enter temperature in celsius:");
    scanf("%f",&C);
    F=(9.0/5.0*C)+32;
    printf("temperature in farenheit =%f",F);
   return 0;
}