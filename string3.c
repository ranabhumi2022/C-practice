#include<stdio.h>
#include<string.h>
int main()
{
     char str []="bhumi";
     char str1[]="rana";
     char str2[]="hello";
     char target[50];
     strcpy(target,str);
     printf("%s %s",target,str);
    strcat(str2,str);
    printf("%s %s",str,str2);
        int a=strcmp("bhumi","rana");
        int a=strcmp("helo","bhumi");
        int a=strcmp("bhumi","bhumi");        
        printf("%d",a);
return 0;
}