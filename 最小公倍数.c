#include <stdio.h>
int main()
{
	long a,b,i1,i2,n1,n2;
	scanf("%ld %ld",&a,&b);
	for (i1=1;i1<=1000000;i1++)
    	{
		    //printf("A");
			if(a%i1==0&&b%i1==0)
		        n1=i1;
	    }   
	for (i2=1;i2<=1000000;i2++)
    	{
		    //printf("B");
			if(i2%a==0&&i2%b==0)
		        {
				n2=i2;
		        break;
		        }
	    }  	    
	printf("The greatest common divisor:%ld\n",n1);
	printf("The lowest common multiple:%ld",n2);
	return 0;
}
