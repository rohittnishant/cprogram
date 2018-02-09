#include<stdio.h>
int main()
{
   int a,w,c,h,e;
   scanf("%d",&a);
   w=a/100;
   c=(a-(w*100))/10;
   d=a-((w*100)+(c*10));
   e=(h*100)+(c*10)+w;
   if(a==e)
   printf("IT iS PALINDROME");
   else
   printf("IT IS NOt PALINDROME");
   return 0;
}
