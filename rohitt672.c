#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter the values of a,b,c:");
scanf("%d%d%d,&a,&b,&c);
if((b>a)&&(b>c))
{
printf("\n%d is greater than %d",b,a);
}
if((c>b)&&(c>a))
{
printf("%d is greater then %d and %d",c,b);
}
return 0;
}
