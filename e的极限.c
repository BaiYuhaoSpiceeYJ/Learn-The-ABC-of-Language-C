#include <stdio.h>
int main()
{
	double e,j=1;
	int n;
	for (n=1;n<=8;n++)
	{
		j=j*n;
		e=1/j+e;
	}
	e=e+1;
	printf("%lf",e);
	return 0;
}
