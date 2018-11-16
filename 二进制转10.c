#include <stdio.h>
#include <math.h>
int main()
{
    long n,i,a[100],c;
    scanf("%ld",&n);
    n=abs(n);
    if(n==0) printf("0");
    else{
	
    for(i=0;i<=90;i++)
    {   
    	a[i]=n%2;
    	n=n/2;
    	if(n==1)
    	{
		a[i+1]=1;
    	break;}
		
	}
	for(c=i+1;c>=0;c--)
	printf("%ld",a[c]);
	return 0;}
}
