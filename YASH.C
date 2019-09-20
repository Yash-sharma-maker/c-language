#include<stdio.h>
#include<conio.h>
void main()
{
int a,b[100];
clrscr();
printf("enter the numbers:-");
for (a=1;a<=7;a++)
{
 scanf("%d",&b[a]);
}
for (a=1;a<=7;a++)
{
if(b[a]<=7)
printf("\t %d",b[a]);
}
 getch();
 }
