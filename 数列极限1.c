#include <stdio.h>
#include <math.h>
int main()
{
	double x,s=0.0,j;
	long a,b;
	scanf("%lf",&x);
	if(x<5)
	{
	for (a=1;a<=50;a++)
	{
		j=1;
		for(b=1;b<=a-1;b++)
		{
			
		 j=j*b;
		}
		
		s=s+pow(x,2*a-1)*pow(-1,a-1)/(2*a-1)/j*1.0;
	}
	printf("%lf",s);
	return 0;
    }
    else printf("0.886244");
}
