#include <stdio.h>
#include <string.h>
char co(char st[100],char copy[100],int m,int n)
{
//	printf("%c",st[1]);
	int i;
	for (i=m-1;i<=n-1;i++)
	{
		copy[i]=st[i];
		printf("%c",copy[i]);
	}
}
int main()
{
    char st[100],copy[100];
    int m,n;
    printf("Enter a string: ");
	gets(st);	
	printf("Enter m: ");
	scanf("%d",&m);
	n=strlen(st);
	co(st,copy,m,n);
	return 0;
} 
