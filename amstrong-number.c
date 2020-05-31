#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,a;
printf("\n enter a number:");
scanf("%d",&num);
while(num>0)
{
a=num%10;
sum=sum*10++a*a*a;
num=num/10;
}
if(num==sum)
printf("\n it is amstrong number");
else
printf("\n it is not a amstrong number");
getch();
}