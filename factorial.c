#include<stdio.h>
#include<conio.h>
void main()
{
int fact=1,i,num;
clrscr();
printf("\n enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("\n factorial:%d", fact);
getch();
}