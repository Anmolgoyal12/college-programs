#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[30];
};
struct  student s1={15,"Aman"};

void main()
{

clrscr();
printf("Student data\n");
printf("%d %s",s1.roll,s1.name);
getch();
}