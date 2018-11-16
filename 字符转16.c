#include <stdio.h>
#include <math.h>
int cha(int n,char a[])
{   
	int i,sum=0;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>='A'&&a[i]<='F')
		sum=sum+pow(16,n-i-1)*(a[i]-'A'+10);
		if(a[i]>='0'&&a[i]<='9')
		sum=sum+pow(16,n-i-1)*(a[i]-'0');
		/*else
		sum=sum+pow(16,n-i-1)*(a[i]-'0');*/
	}
	printf("%d",sum);
}
int main()
{
	char a[80];
	int n,i;
	printf("Enter a string: ");
	gets(a);
	n=strlen(a);
	/*for(i=0;i<=n-1;i++)
	{
		if (a[i]<='A'||a[i]>='F'&&a[i]<='0'||a[i]>='9')
		return 0;}*/
	cha(n,a);
	return 0;
}
