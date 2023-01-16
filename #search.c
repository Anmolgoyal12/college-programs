#include<stdio.h>
#include<conio.h>
void main()
{
    int *p,i,a[10],N;
    p=a;
    printf("Enter elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter e element to search:\n");
scanf("%d",&N);

    for(i=0;i<10;i++)
{
    if(p==N)
    {
        printf("Element exist at %d",i+1);
    }
    else{
        printf("Element not exist");
    }
}
    for(i=0;i<10;i++)
    {
        printf("%d ",p[i]);
    }
}