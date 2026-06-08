#include<stdio.h>
int main()
{
    char str[56];
    int len=0,n;
    printf("enter no. of  strings:");
    scanf("%d",&n);
    printf("enter strings:");

    for(int i =0;i<n;i++)
    {
        scanf("%c",&str);
        len=len+i;

    }
    printf("length of string:%d",len);
return 0;
}