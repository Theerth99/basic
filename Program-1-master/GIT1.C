#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float i;
scanf("%f",&i);
if(i<0)
{
printf("\n  number is negative");
}
else if(i>0)
{
printf("\n  number is positive");
}
else
{
printf("\n  number is zero");
}
getch();
}
