#include <stdio.h>
int main()
{
    int i,j,a[11],m;
    for (i=0;i<10;i++)
    {
    	scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	if(m>=a[0])
	    {
	    		for (j=9;j>=0;j--)
			{
				a[j+1]=a[j];
			}
			a[0]=m;
		}
	else{
	
	for (i=0;i<9;i++)
	{   
	
		if(a[i]>=m&&a[i+1]<=m)
		{
			for (j=9;j>i;j--)
			{
				a[j+1]=a[j];
			}
			a[i+1]=m;
			break;
		}
		else a[10]=0;
	}}
	for (i=0;i<=10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
