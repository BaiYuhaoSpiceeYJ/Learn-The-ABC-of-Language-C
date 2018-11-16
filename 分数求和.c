#include <stdio.h>
void s(int a[],int b[])
{
	int fenzi,fenmu,i;
	for (i=a[1];i<=1000;i++)
	{
		if(i%a[1]==0&&i%b[1]==0)
		{
			fenzi=i/a[1]*a[0]+i/b[1]*b[0];
			fenmu=i;
			break;
		}
		
	}
	for (i=fenzi;i>=1;i--)
	{
		if(fenzi%i==0&&fenmu%i==0)
		break;
	}
	printf("the result is %d/%d",fenzi/i,fenmu/i);
}
int main()
{
	int a[2];
	int b[2];
	int i;
	printf("please enter the fenzi,fenmu of two complex:\n");
	for(i=0;i<=1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=1;i++)
	{
		scanf("%d",&b[i]);
	}
	s(a,b);
	return 0;
}
