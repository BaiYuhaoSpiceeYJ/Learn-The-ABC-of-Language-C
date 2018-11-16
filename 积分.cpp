#include <stdio.h>
#include <math.h>

int main()
{
    double y,x,up,down,sum=0.0,i;
    
    scanf("%lf %lf",&down,&up);
	for(x=down;x<=up;x=x+0.0001)
	{
		y=sin(x)/x;
		sum=sum+y*0.0001;
	}	
	printf("%lf",sum);
}
