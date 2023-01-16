#include<stdio.h>
#include<conio.h>
void input(int,int);
void add(int *,int *);
void main()
{
    
    int x,y;

    input(x,y);

}
void input(int p1,int p2)
{
    printf("Enter two values\n");
    scanf("%d %d",&p1,&p2);
    add(&p1,&p2);
}
void add(int *p1,int *p2)
    {
        
int r;
r=*p1+*p2;
printf("\nSum is %d",r);
}