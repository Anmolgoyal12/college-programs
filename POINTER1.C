#include<stdio.h>
#include<conio.h>
void main()
{
int *p;
int x=10;
clrscr();

p=&x;

printf("%d",*p+10);
printf("\n%d",*p-30);
getch();
}