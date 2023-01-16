#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][3],b[2][2],c[2][2],i,j;
    int k;
    printf("Enter 1st array:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
         scanf("%d",&a[i][j]);
        }
        }
    printf("Enter 2nd array:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         scanf("%d",&b[i][j]);
        }
        }
if(a[i]==b[j])
{
    
      for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
    {
           c[i][j]=0;
        for(k=0;k<2;k++)
    {
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
    }
    }
printf("\n array multiply\n");
  for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
    {
    printf("%d ",c[i][j]);
    }
    printf("\n");
        }    }
        else{
            printf("matrix multiply not posible");
        }
    getch();
}


