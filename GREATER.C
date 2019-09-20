#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the number:-");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("first value is greater");
}
else if(b>c&&b>a)
{
printf("second value is greater");
}
else

{
printf("third value is greater");
}
getch();
}