#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char fname[30],lname[30];
clrscr();
printf("\n enter your first name:");
gets(fname);
printf("\n enter your last name:");
gets(lname);
strcat(fname," ");
strcat(fname,lname);
printf("\n combining both names:%s",fname);
getch();
}