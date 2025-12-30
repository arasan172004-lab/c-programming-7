#include<stdio.h>
#include<conio.h>
#include<string.h>
int add (int x,int y)
{
printf("%d",x+y);
}
int sub (int x,int y)
{
printf("\n %d",x-y);
}
void main()
{
int a,b;
clrscr();
printf("Enter the values:");
scanf("%d%d",&a,&b);
add(a,b);
sub(a,b);
getch();
}

