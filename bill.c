#include<stdio.h>
int main()
{
    int unit,bill;
    printf("enter unit:");
    scanf("%d",&unit);
    if (unit>0 && unit<50);
    {
        printf("bill is free");
    }
    elseif(unit>=50&&unit>150);
    {
        bill=unit*8;
    }
    elseif(unit>=150&&unit<300);
    {
        bill=unit*6;
    }
    else
    {
        bill=unit*5;
    }

    }