#include<stdio.h>
#include<conio.h>
int main()
{
	int g,i,fact=1;
	scanf("%d",&g);
	for(i=1;i<=g;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
