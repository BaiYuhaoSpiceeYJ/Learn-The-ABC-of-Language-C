#include <stdio.h>
#include <string.h>
int main()
{
    int a[100];
    int b[100];
    gets(a);
    strcpy(b,a);
    strrev(a);
    puts(a);
    if(strcmp(a,b)==0)
        printf("Sym");
    return 0;
}
