#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
char str[]="Yash Sharma";
for(i=0;str[i]!='\0';i++)
	printf("%d - %c\n",i,str[i]);
getch();
}
