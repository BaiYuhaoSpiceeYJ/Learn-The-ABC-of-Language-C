#include <stdio.h>
#include <math.h>
int cha(int n,char st[])
{
	int i,j=0,sum=0;
	for(i=n-1;i>=0;i--)
	{
		if(st[i]>='0'&&st[i]<='9')
		{
		    sum=sum+(st[i]-'0')*pow(10,j);
		    j++;
	    }
	}
	printf("digit=%d,%d",sum,2*sum);
}
int main()
{
	char st[80];
	int n;
	printf("Enter a string: ");
	gets(st);
	n=strlen(st);
	cha(n,st);
	
}
