#include <stdio.h>
int main()
{
    int i,j,a[10][6],b[10];
    int static sum[10];
    for(i=0;i<=9;i++)
    {
    	scanf("%d ",&b[i]);
	}
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=5;j++)	
        {
        	scanf("%d ",&a[i][j]);
        	sum[i]=sum[i]+a[i][j];
		}
		if (sum[i]>=530)
		printf("[%d,%d]\n",i+1,sum[i]);
	}

	return 0;
}
