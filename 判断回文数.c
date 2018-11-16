#include <stdio.h>
#include <math.h>
int main()
{
	long n,i=0,j=1,sum=0,m,now,s;
	scanf("%ld",&n);
	while(j<n)
	{
		i=i+1;
		j=10*j;
	}//确认n的位数
	
	for (m=i-1;m>=0;m--)
	{
		/*s=(n/pow(10,m));
		now=s%10;*/
		now=(long)(n/pow(10,m))%10;
	    sum=sum+now*pow(10,i-m-1);
    }
		
	
	if (sum==n)
	printf("Y");
	else printf("N");
	
	return 0;
}
