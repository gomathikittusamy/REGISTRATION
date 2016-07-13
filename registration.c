#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,n;
clrscr();
printf("enter the n value\n");
scanf("%d",&n);
printf("enter the element 1 by 1\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
printf("%d ",a[i]);
}
}
}
getch();
}
