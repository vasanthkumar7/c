#include<stdio.h>
#include<conio.h>
void main()
{
int num,a ,sum=0;
clrscr();
printf("\n enter a number:");
scanf("%d",&num);
while(num>0)
{
a=num%10;
sum=sum*10+a;
num=num/10;
}
printf("\n reversed number:%d",sum);
getch();
}