#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1;
char c;
int choice;
void swap(int,int);
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void greater(int,int);
void lesser(int,int);

clrscr();
//L1:
printf("Enter numbers:\n");
scanf("%d%d",&n,&n1);
printf("\nCOMBO CHOICE\n1.Swap\n2.Add\n3.Sub\n4.Mul\n5.Div\n6.Greater\n7.Lesser");
printf("\nEnter choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:swap(n,n1);
break;
case 2:add(n,n1);
break;
case 3:sub(n,n1);
break;
case 4:mul(n,n1);
break;
case 5:div(n,n1);
break;
case 6:greater(n,n1);
break;
case 7:lesser(n,n1);
break;
default:printf("wrong choice");
}
getch();
}
void swap (int n,int n1)
{
int n2;
n2=n1;
n1=n;
n=n2;
printf("%d %d",n,n1);
}
void add(int n,int n1)
{
int c=n+n1;
printf("%d",c);
}
void sub(int n,int n1)
{
int c;
c=n-n1;
printf("%d",c);
}
void mul(int n,int n1)
{
int c=n*n1;
printf("%d",c);
}
void div(int n,int n1)
{
int c;
c=n/n1;
printf("%d",c);
}

void greater(int n,int n1)
{
if(n>n1)
printf("%d",n);
else
printf("%d",n1);
}

void lesser(int n,int n1)
{
if(n<n1)
printf("%d",n);
else
printf("%d",n1);
//goto L1;
}
