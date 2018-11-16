#include <stdio.h>
#include <math.h>
int main()
{
    double n,s;
    int i;
    for (n=0;n<=1000;n++)
    {   s=1;
    	for (i=1;i<=10;i++)
    	{   
		    s=s*(1+n/1000.0);
		}
		if (s>=2)
		break;
    /*	if (pow(1+n/100.0,10)>=2)
    	break;*/
	}
	printf("%.1lf%%",n/10);
	return 0;
}
