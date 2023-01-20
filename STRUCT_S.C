#include<stdio.h>
#include<conio.h>
struct student
{
char name[40];
	struct marks
	{
	   int m1;
	   int m2;
	   int m3;
	   int m4;
	   int m5;
     }s2;
}s1[2];

void main()
{
int s,i;
clrscr();
printf("Enter student records\n");
for(i=0;i<2;i++)
{
scanf("%s%d%d%d%d%d",&s1[i].name,&s1[i].s2.m1,&s1[i].s2.m2,
&s1[i].s2.m3,&s1[i].s2.m4,s1[i].s2.m5);
}
for(i=0;i<2;i++)
{
s=s1[i].s2.m1+s1[i].s2.m2+s1[i].s2.m3+s1[i].s2.m4+s1[i].s2.m5;
printf("Sum of %s students is %d\n",s1[i].name,s);

}
getch();
}