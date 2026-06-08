#include<stdio.h>
int main()
{
    int i =89;
    int*j=&i;
    int **k=&j;
    // printf("\nvalue of i is %d",i);
    // printf("\nvalue of i is %d",*j);
    // printf("\nvalue of i is %d",**k);
    // printf("\naddress of i is %u",&i);
    // printf("\naddress of i is %u",j);
    // printf("\naddress of i is %u",*k);
    printf("address of j is %u",&j);
    printf("\n value of k is %d",k);
    printf("\n address of k is %u",&k);
return 0;
}