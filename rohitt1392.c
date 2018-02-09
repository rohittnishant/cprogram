#include<stdio.h>
int main()
{
int num,k;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
num/=10;
k++;
}
printf("%d",k);
return 0;
}
