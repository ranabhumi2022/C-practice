//-----call by value-----


#include<stdio.h>

int sum(int a,int b );
int sum(int a,int b)
{   a=6;
    return a+b;
}
int main()
{
   int  x=1,y=3;
   printf("sum of  no. is %d",sum(x,y));
   printf("\n value of a is %d",x);
   return 0;

}