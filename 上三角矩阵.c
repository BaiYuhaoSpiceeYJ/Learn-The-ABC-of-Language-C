#include <stdio.h>
int main()
{
    int a[10][10],i,j,m=0,n;
    scanf("%d",&n);
    if (n>1)
    {
	for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<=n-1;j++)
    	{
    		scanf("%d ",&a[i][j]);
		}
	}
     for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<=n-1;j++)
    	{
    		if(j<i&&a[i][j]!=0)
    		m++;
		}
	}
	if (m==0)
	printf("YES");
	else printf("NO");}
	else  printf("NO");
	return 0;
}
