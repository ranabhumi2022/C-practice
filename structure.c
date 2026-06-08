#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main(){
struct employee e1;
strcpy(e1.name,"harry");
e1.code=100;
e1.salary=71.22;

printf("%d %f %s ",e1.code,e1.salary,e1.name);
return 0;
}


