#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],C[10];
int i,r;
clrscr();

printf("Enter no of rows:\n");
scanf("%d",&r);
printf("First array\n");
for(i=0;i<r;i++)
{
scanf("%d",&a[i]);
}

printf("Second array\n");
for(i=0;i<r;i++)
{
scanf("%d",&b[i]);
}


for(i=0;i<r;i++)
{
C[i]=a[i]+b[i];
}

printf("array sum\n");
for(i=0;i<r;i++)
{

printf("%d ",C[i]);
}

getch();
}
