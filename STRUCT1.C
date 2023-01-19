/* run time*/
#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[30];
char gender[30];
char fname[30];
} ;
struct student s1;
//s1={15,"Anmol",'M',"Ajay"};
void main()
{
clrscr();
printf("Enter student data\n");
scanf("%d %s %s %s",&s1.roll,&s1.name,&s1.gender,&s1.fname);


printf("\nStudent data\n");
printf("%d %s %s %s",s1.roll,s1.name,s1.gender,s1.fname);
getch();
}