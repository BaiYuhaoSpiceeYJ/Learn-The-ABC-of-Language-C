#include <stdio.h>
int main()
{
	long n,i,j,k;
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<i;j++)
		{
			printf("%ld ",k);
			k=k*(i-j)/j;
		}
		printf("1\n");
	}

	return 0;
}
