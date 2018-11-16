#include <stdio.h>

int main()
{
	int n,i,j;
	char c='A';
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++) printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			
				printf("%c",c+(j-1)%26);
		}
		
		printf("\n");
	}
	
	return 0;

}

