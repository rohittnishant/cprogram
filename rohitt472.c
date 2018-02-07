#include <stdio.h>

void main()
{
    char g;
    g=getchar();
    
    if((g<'z'&&g>'a')|(g<'Z'&&g>'A')){
        printf("Alphabet");
    }else {
        printf("No");
    }
}

