#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("\n Enter a number :");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum+=i;
++i;
}
printf("Sum=%d",sum);
getch();
}