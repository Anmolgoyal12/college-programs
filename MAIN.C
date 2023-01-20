#include<Stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[50];
}s1;

void main()
{

void print(struct student);

clrscr();

printf("Enter record\n");
scanf("%d %s",&s1.roll,&s1.name);
print(s1);
getch();
}

void print(struct student s1)
{
printf("%d %s",s1.roll,s1.name);
}
