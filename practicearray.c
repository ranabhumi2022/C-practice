#include<stdio.h>
int count(int arr[],int n);
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:");
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&a[i]); 
    }
    printf("count of no. in an array is %d",count(a,n));
    return 0;
}
int  count(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>0){
            count+=1;
        }
    }    
return count;
}