#include<stdio.h>
#include<conio.h>
void main()
{
 int lenght,height;
 float area;
 clrscr();
 textcolor(GREEN);
cprintf("enter the lenght  of triangle:-");
scanf("%d",&lenght);
  textcolor(GREEN);
cprintf("enter the height  of triangle:-");
scanf("%d",&height);
area=1.0*(lenght*height)/2;
 textcolor(RED);
 gotoxy(30,10);
cprintf("Your area of triangle is :%f",area);
getch();
}
