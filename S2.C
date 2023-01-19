#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[30];
int age;
};
struct student  s1;
void main()
{
clrscr();
printf("Enter student data\n");
scanf("%d %s %d",&s1.roll,&s1.name,&s1.age);


printf("Student record\n");

printf("%d %s %d",s1.roll,s1.name,s1.age);
getch();
}