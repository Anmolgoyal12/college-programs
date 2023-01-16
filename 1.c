#include<stdio.h>


void main()
{
    int *p,x;
    p=&x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("%d",*p+30);
}

