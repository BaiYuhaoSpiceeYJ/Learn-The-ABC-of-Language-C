#include <stdio.h>
#include <math.h>
int tran(int n)
{
	int i=0,j=1,sum=0,m,now;
	scanf("%d",&n);
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
    printf("%d",sum);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    tran(n);

return 0;
}
