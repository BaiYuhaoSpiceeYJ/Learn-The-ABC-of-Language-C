#include <stdio.h>
int main()
{
    int static a[10][10],i,j,m,n,i2,s=0,y=0;
    scanf("%d",&n);
   
	for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<=n-1;j++)
    	{
    		scanf("%d ",&a[i][j]);
		}
	}//������� 
    for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<=n-1;j++)
    	{
		    m=0;
    	    if (a[j]>a[m])
    	    {
    	    	m=j;
			}
        }//��ǰ������������λ�� 
        for (i2=0;i2<=n-1;i2++)
        {
        	if(a[i2][j]<a[i][j])
        	{
			s=1;
        	break;}//�Ƿ���ÿһ�е���һ���ж���С 
		}
		if(s==0)
	    { 
			printf("%d %d",i+1,j+1);
			y++;
		}
	}
	if (y==0)
	{
		printf("NO");
	} 
	return 0;
}
