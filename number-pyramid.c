#include<stdio.h>
#include<conio.h>
void main()
{
int num,a;
clrscr();
printf("\n enter a number to print number pyramid:");
scanf("%d",&num);
while(num>0)
{
num=num/10;
if(num==0)
break;
printf("\n %d",num);

}
getch();
}