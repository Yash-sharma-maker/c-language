#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter two numbers:-");
scanf("%d%d",&a,&b);
if(a==b)
{
textcolor(YELLOW);
cprintf("the number is equal");
}
else
{
textcolor(RED);
cprintf("the number is not equal");
}
getch();
}
