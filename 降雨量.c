#include <stdio.h>
#include <math.h>

int main()
{
	float mois[12],sum=0.00;
	float per[11];
	int i,m;
	
	for(i=0;i<=11;i++)
	{
		scanf("%f",&mois[i]);
		sum=sum+mois[i];
	}
	
	for(i=0;i<=11;i++)
	{
		per[i]=mois[i]/sum*100;
    }
    
    for(i=0;i<=11;i++)
	{
		printf("%d(%.f%%)",i+1,per[i]);
		for(m=1;m<=per[i]+0.5;m++)
		printf("#");
		printf("\n");
	}
	return 0;
}
