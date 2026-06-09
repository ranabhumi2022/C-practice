//-----1-----
#include<stdio.h>
int main()
{
    int m1,m2,m3,total;
    printf("enter marks of first subject:\n");
    scanf("%d",&m1);
    printf("enter marks of 2nd subject\n");
    scanf("%d",&m2);
    printf("enter marks of 3rd subject\n");
    scanf("%d",&m3);
    printf("the marks are %d,%d,%d\n",m1,m2,m3);
    if(m1<33 || m2<33 || m3<33)
        printf("you have failed");
    
    else{
        total=(m1+m2+m3)/3;
        if (total<=44)
            printf("you are fail");
        else
            printf("you have passed");
    }
    return 0;
}

//-----2------
#include<stdio.h>
int main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    if((year %4==0&&year%100!=0)||(year %400==0))
    {
        printf("it is a leap year");
    }
    else
        printf("it is not a leap year");
        return 0;
}

//-------3-----

#include<stdio.h>
int main()
{
    char text;
    printf("enter text:");
    scanf("%d",&text);
    if(text>=97&&text<=122)
        printf("it is in lowercase");
    else 
        printf("it is not in lowercase");
    return 0;
}

