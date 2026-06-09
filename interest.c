#include<stdio.h>
int main()
{
    float SI,P;
    int R,T;
    printf("enter principle:");
    scanf("%f",&P);
    printf("enter rate");
    scanf("%d",&R);
    printf("enter time span:");
    scanf("%d",&T);
    SI=(P*R*T)/100;
    printf("simple interest=%f",SI);
    return 0;
}


