
#include <stdio.h>

void main()
{
    char g;
    g=getchar();
    
    if(g=='a'|g=='e'|g=='i'|g=='o'|g=='u'){
        printf("Vowel");
    }else {
        printf("Consonent");
    }
}
