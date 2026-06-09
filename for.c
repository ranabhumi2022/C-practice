//-----1-----
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {

        if(i==4)
        {continue;
        }
        
    }
    return 0;
}

//------2-------
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    printf("%d * %d = %d\n",n,i,i*n);
return 0;
}

//-----3---
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter number");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    printf("%d *%d =%d\n",n,i,i*n);
return 0;
}

//----4-----
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
    }
    printf("sum of natural number=%d",sum);
return 0;
}


//------5------
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter no:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d =%d\n",n,i,n*i);
        sum=sum+(i*n);
    }    
    
    printf("sum of occurence is %d",sum);
    
    return 0;
}


