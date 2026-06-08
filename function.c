#include<stdio.h>
int average(a,b,c);
int main()
{
    int a,b,c;
    printf("Enter number 1");
    scanf("%d",&a);
    printf("enter 2 number:");
    scanf("%d","&b");
    printf("enter number3:");
    scanf("%d",&c);
int average(int x,y,z)
{
    average=(x+y+z)/3;
    printf("average of three number is:%d",average);

}
return 0;
}

//-------2------
#include<stdio.h>
int sum(int);
int sum(int n){
    if(n==1)
    {
        return 1;
    }    
    return n+sum(n-1);
}
int main()
{
    printf("sum of n terms is :%d",sum(5));
return 0;
}
