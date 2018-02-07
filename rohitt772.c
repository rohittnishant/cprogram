#include <stdio.h>

void main()
{
    int a,b,t;
    
    scanf("%d %d %d",&a,&b,&t);
    
    if(a>b&&a>t){
        printf("%d",a);
    }else if(b>t&&b>a){
        printf("%d",b);
    }else {
        printf("%d",t);
    }
}
