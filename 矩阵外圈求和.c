#include <stdio.h>
int main()
{
	int m,n,a,b;
	float c[50][50],sum=0.0;
	scanf("%d %d",&m,&n);
	for (a=0;a<=m-1;a++)
	{
		for (b=0;b<=n-1;b++)
		{
			scanf("%f",&c[a][b]);
			sum=sum+c[a][b];
		}
	}
	if(n>=3||m>=3){
	for (a=1;a<=m-2;a++)
	{
		for (b=1;b<=n-2;b++)
		{
			sum=sum-c[a][b];
		}
	}}
	printf("%.1f",sum);
	return 0;
} 
