#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[3][3],b[3][3],c[3][3];
int j;
clrscr();
printf("Enter first matrix :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter second matrix :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("First matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

printf("SECOND matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
printf("Display atrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
getch();
}

