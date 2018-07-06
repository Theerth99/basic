#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
clrscr();
printf("\n Enter an integer number: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("\n Sum of %d natural number is %d ",num,sum);
getch();
}