#include<stdio.h>
#include<conio.h>
int main()
{
	 int a,g,c;
	printf("enter the first number");
	scanf("%d",a);
	printf("enter the second number");
	scanf("%d",&g);
	for(c=a;c<=g;c++)
	{
		(c%2==0);
		printf("%d\n",c);
	}
  getch();
  return 0;
}
