#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0;
clrscr();
printf("\n ENTER A NUMBER:");
scanf("%d",&n);
while(n)
{
n=n/10;
c++;
}
printf("\n NUMBER OF DIGITS IS:%d",c);
getch();
}