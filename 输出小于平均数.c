#include <stdio.h>
int main()
{
	int n,a[20],i,m=-1,sum=0;
	float av;
	scanf("%d",&n);
	if(n!=0){
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	av=sum*1.00/n;
	printf("%.2f\n",av);
	for(i=0;i<n;i++)
	{
		if (a[i]<av)
		{
	    	if(m==-1)
	    	{
	    	    printf("%d",a[i]);	
	    	    m=1;
			}
	    	else printf(",%d",a[i]);
	    }
	}}
	else printf("0.00");
	return 0;
}
