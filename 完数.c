#include <stdio.h>
int main()
{
	int n,i,a;
	for(n=1;n<=1000;n++)
	{
	    a=0;
        for(i=1;i<=n-1;i++)
        {
	        if(n%i==0)
            {
    	        a=a+i;
            }
        }
    if (a==n)
    printf("%d ",n);
    }
    
    return 0;
}
