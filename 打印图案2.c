#include <stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	if (n==1)
    {
    	for (i=1;i<=3;i++)
    	{
    		for(j=1;j<=2*i-1;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
	}
	
	if(n==2)
	{
		for (i=3;i>=1;i--)
    	{
    		for(j=1;j<=2*i-1;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
	}
	
	if(n==3)
	{
    	for (i=1;i<=3;i++)
    	{
    		for(j=1;j<=2*i-1;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
		for (i=2;i>=1;i--)
    	{
    		for(j=1;j<=2*i-1;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
	}
	
	if(n==4)
		{
    	for (i=1;i<=3;i++)
    	{
    		for(k=1;k<=3-i;k++)
    		printf(" ");
    		for(j=1;j<=2*i-1;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
		for (i=2;i>=1;i--)
    	{
    		for(k=1;k<=3-i;k++)
    		printf(" ");
    		for(j=1;j<=2*i-1;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}

