#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
printf("\n enter the numbers:");
scanf("%d",&i);
scanf("%d",&j);
scanf("%d",&k);
if(i>j&&i>k)
printf("\n %d is greater",i);
else if(j>k&&j>i)
printf("\n %d is greater",j);
else if(k>i&&k>j)
printf("\n %d is greater",k);
getch();
}