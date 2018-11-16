#include <stdio.h>

int main()
{
    char *p;
    char a[100];
    int i;
    printf("Input a string:");
    for (i=0;i<=100;i++)
    {
       a[i]=getchar();
       if (a[i]=='\n')
       {
           break;

       }
    }
    i=i-1;
    p=&a[i];
    printf("after converted:");
    for (;i>=0;i--)
    {
        printf("%c",*p);
        p--;
    }
}
