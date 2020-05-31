#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int ch;
float cel,faren;
while(ch!=3)
{
clrscr();
printf("\n 1,celcius to farenheit ");
printf("\n 2,farenheit to celcius ");
printf("\n 3,exit ");
printf("\n enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("\n enter temprature in celcius:");
 scanf("%f",&cel);
 faren=(1.8*cel) + 32;
 printf("\n temprature in farenheit: %f ",faren);
 getch();
 break;
 case 2:printf("\n enter temprature in farenheit:");
 scanf("%f",&faren);
 cel=5*(faren-32)/9;
 printf("\n temprature in celsius: %f ",cel);
 getch();
 break;
 case 3:exit(0);
 }
 }
 getch();
 }