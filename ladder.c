#include<stdio.h>
int main()
{
    int tax,income;
    printf("enter income\n");
    scanf("%d",&income);
    if(income>250000&&income<500000)
    {
        tax=0.05*(income-250000);
        printf("your tax=%d",tax);
    }
    else if (income>=500000&&income<1000000)
    {
        tax=0.05*(500000-250000)+0.2*(income-500000);
        printf("your tax=%d",tax);
    }
    else if (income>1000000)
    {
        tax=0.05*(500000-250000)+0.2*(1000000-500000)+ 0.30*(income-1000000);
        printf("your tax =%d",tax);
    }
    else
        printf("no tax ");
    return 0;
}