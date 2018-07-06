#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n enter a number or letter :");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
printf("\n The character is a albphabet");
else
printf("\n The character is a number");
getch();
}