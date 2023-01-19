#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[30];
int age;
};
struct student s1[3];
void main()
{
int i;
clrscr();
printf("Enter student record ");
for(i=0;i<3;i++)
{
scanf("%d %s %d",&s1[i].roll,&s1[i].name,&s1[i].age);
}
printf("Student record\n");
for(i=0;i<3;i++)
{
printf("%d %s %d\n",s1[i].roll,s1[i].name,s1[i].age);
}
getch();
}


