#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];    
};
int main()
{
    struct employee e1,e2,e3;

    printf("enter employee name:");
    fgets(e1.name,10,stdin);
    printf("enter salary:");
    scanf("%f",e1.salary);
    printf("enter code:");
    scanf("%d",e1.code);
}