#include<stdio.h>
void strmcpy(char s[],char a[],int n,int i)
{   
    char *p;
    int j;
    p=&a[n-1];
    for (j=0;j<i-n+2;j++)
    {
        s[j]=*p;
        *p++;
    }
    printf("Output is:");
    for (j=0;j<i-n+2;j++)
    {
        printf("%c",s[j]);
    }
}
int main()
{
    char a[100],s[100];
    int i,n;
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
    printf("Input an integer:");
    scanf("%d",&n);
    strmcpy(s,a,n,i);
}
