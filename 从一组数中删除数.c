#include <stdio.h>
int main()
{
	int a[10],b[10],m,i,c=0;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	scanf("%d",&m);
	for(i=0;i<=9;i++)
	{
		if(m==a[i])
		{
		    b[i]=0;
			c=1;	
		}
	}
	if (c!=0)
	{
	for(i=0;i<=9;i++)
	{
		if(b[i]==1)
		printf("%d ",a[i]);
	}}
	else printf("fail!");
	return 0;
}
