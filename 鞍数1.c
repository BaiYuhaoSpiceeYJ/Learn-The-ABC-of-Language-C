#include <stdio.h>
int main()
{
    int static a[10][10];
    int static b[10][10];
	int i,j,m,n,y,n1,n2=0;
    scanf("%d",&n);
   
	for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<=n-1;j++)
    	{
    		scanf("%d ",&a[i][j]);
		}
	}//输入矩阵 
    for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<=n-1;j++)
    	{
    		m=0;
    	    if (a[i][j]>a[i][m])
    	    {
    	    	m=j;
			}
        } 
        b[i][m]=b[i][m]+1;
	}//每行最大的数的位置+1
	  for (j=0;j<=n-1;j++)
    {
    	for (i=0;i<=n-1;i++)
    	{
    		m=0;
    	    if (a[i][j]<a[m][j])
    	    {
    	    	m=i;
			}
        } 
        b[m][j]=b[m][j]+1;
	}//每列最大的数的位置+1
	 for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<=n-1;j++)
    	{
    		if(b[i][j]==2)
    		{
    			n1=i;
    			n2=j;
    			y++;
			}
        } 
	}
    if(y==1)
    printf("%d %d",n1+1,n2+1);
    else printf("NO");
	return 0;
}
