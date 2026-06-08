//------call by reference-----
#include<stdio.h>
int sum(int*,int*);
int sum(int *a,int*b)
{   *a=5;
    return *a+*b;
}
int main()
{
    int x=6,y=4;
    printf("sum of no. is %d",sum(&x,&y));
    printf("\n value of x is %d",x);
return 0;
}