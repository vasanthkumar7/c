#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,j,size,temp;
printf("\n enter the size of the array:");
scanf("%d",&size);
printf("\n enter the array:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size-1;i++)
{
for(j=i+1;j<size;i++)
{
if(a[j]<a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\n smallest:%d  largest:%d ",a[0],a[size-1]);
getch();
}
