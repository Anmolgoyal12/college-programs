#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int *,int *);
int x,y;
clrscr();
printf("Enter two values");
scanf("%d%d",&x,&y);
printf("Before swapping: %d %d",x,y);
swap(&x,&y);
printf("\nAfter swapping: %d %d",x,y);
getch();
}
void swap(int *p1,int *p2)
{
int temp;
temp=*p2;
*p2=*p1;
*p1=temp;
}