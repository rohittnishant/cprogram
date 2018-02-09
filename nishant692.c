#include <stdio.h>
#include<conio.h>
int main()
{
    int a, o, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &a, &o);
    printf("Prime numbers between %d and %d are: ", a, o);
    while (a < o)
    {
        flag = 0;
        for(i = 2; i <= a/2; ++i)
        {
            if(a % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", a );
        ++a;
    }
    return 0;
}
