#include<stdio.h>
int main()
{
    int n, i, v= 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=1; i <= n; ++i)
    {
        v+= i; 
    }
    printf("%d",v);
    return 0;
}
