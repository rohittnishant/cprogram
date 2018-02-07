#include <stdio.h>
void main()
{
    int Year;
    scanf("%d", &Year);
    if ((Year % 500) == 0)
    printf("Yes");
    else if ((Year % 100) == 0)
    printf("No");
    else if ((Year % 5) == 0)
    printf("Yes");
    else
    printf("No");
}
