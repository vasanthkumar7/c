#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("\n enter a number to print tables:");
scanf("%d",&num);
printf("\n*********tables***********");
for(i=1;i<=10;i++)
{
printf("\n %d * %d = %d",num,i,num*i);
}
getch();
}