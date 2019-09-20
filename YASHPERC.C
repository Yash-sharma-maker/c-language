#include<stdio.h>
#include<conio.h>

void main()
{
int maths,physics,chemistry,biology;
float average,percentage,total;
clrscr();
printf("enter the number");
scanf("%d%d%d%d",&maths,&physics,&chemistry,&biology);
total=maths+physics+chemistry+biology;
average=total/4;
percentage=(total/400)*100;

printf("\n total= %f\n percentage= %f\n average= %f",total,percentage,average);
getch();
}