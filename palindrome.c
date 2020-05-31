#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char pal[30],rev[30];
clrscr();
printf("\n enter a name:");
gets(pal);
strcpy(rev,strrev(pal));
if(strcmp(pal,rev)==0)
printf("\n it is a palindrome");
else
printf("\n it is not a palindrome");
getch();
}
