#include<stdio.h>
#include<conio.h>
void main()
{
    int *p,i,a[10];
    p=a;
    printf("Enter elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",p[i]);
    }
}