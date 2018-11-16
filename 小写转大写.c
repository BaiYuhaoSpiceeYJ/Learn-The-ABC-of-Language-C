#include <stdio.h>
char tran(char now)
{
	if (now>='a'&&now<='z')
	{
		now=now-'a'+'A';
	}
	return now;
}

int main()
{
	char c[80],now;
	int i,n,count=0;
	printf("Enter a string: ");
	gets(c);
	n=strlen(c);
	for (i=0;i<=n-1;i++)
	{
		if (c[i]>='A'&&c[i]<='Z'||c[i]==' ')
		count++;
	}
	if(count==n)
	{
		printf("no lowercase");
	}	
	else for (i=0;i<=n-1;i++)
	{
		now=c[i];
		//tran(now);
		printf("%c",tran(now));
	}
}
