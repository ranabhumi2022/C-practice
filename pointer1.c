#include<stdio.h>
int main()
{
    // int i=72;
    // int *j=&i;
    // int k=98;
    // int *m=&k;
    // printf("adress of i is %u :",*&j);
    // printf("\naddress of k is %u :",*&m);
    // printf("\nvalue of i is: %d",*j);
    // printf("\nvalue of k is : %d",*m);
    char str ='a';
    char abc='b';
    char *j=&str;
    printf("adress of a is %u",j);
    printf("\naddress of b is %u",&abc);
    return 0;
}