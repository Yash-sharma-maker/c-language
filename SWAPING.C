#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the two numbers:");
scanf("%d%d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("after swap is :%d and b is : %d",a,b);
getch();
}
