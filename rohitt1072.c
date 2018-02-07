#include<stdio.h>
void main()
{
    int b,n,sum=0;
    printf("enter the value of n;");
    scanf("%d",&n);
    for(b=1; b<=n; b++)
    {
        sum+=b;
    }
    printf("sum of first %d given natural number=%d",n,sum);
}
