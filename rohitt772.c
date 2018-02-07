#include <stdio.h>

void main()
{
    int a,b,g;
    
    scanf("%d %d %d",&a,&b,&g);
    
    if(a>b&&a>g){
        printf("%d",a);
    }else if(b>g&&b>a){
        printf("%d",b);
    }else {
        printf("%d",g);
    }
}
