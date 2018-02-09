#include<stdio.h>
#include<conio.h>
int main()
{
int h,e,i;
printf("enter number:");
scanf("%d",&h);
printf("enter range");
scanf("%d",&e);
for(i=0;i<=e;++i)
{
printf("%d * %d =%d\n",h,i,h*i);
getch();
return 0;
}
