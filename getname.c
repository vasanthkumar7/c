#include<stdio.h>
#include<conio.h>
void main()
{
	int age ,phone;
	char name[20];
	printf("ENTER YOUR NAME,AGE AND PHONE NUMBER:");
	scanf("%s %d %d",name,&age,phone);
	printf("\n NAME:%s AGE:%d PHONE NUMBER:%d",name,age,phone);
	getch();
	
}
