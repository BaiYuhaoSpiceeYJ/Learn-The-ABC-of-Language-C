#include <stdio.h>
#include <math.h>

int main()
{
	char a[80];
	int index,num,power=0;
	long sum=0;
	static int b[80];
	for(index=0;index<80;index++)
	{
		a[index]=getchar();
		if(a[index]=='\n') break;
	}
	num=index;
	for(index=0;index<num;index++)
	{
		if((48<=a[index]&&a[index]<=57)||(97<=a[index]&&a[index]<=102)||65<=a[index]&&a[index]<=90) b[index]=1;
	}
	for(index=0;index<80;index++)
	{
		if(b[index]==1) printf("%c",a[index]);
	}
	for(index=79;index>=0;index--)
	{
		if(b[index]==1)
		{
			if(a[index]>='0'&&a[index]<='9') sum+=(a[index]-48)*pow(16,power);
			else if(a[index]>='a'&&a[index]<='f') sum+=(a[index]-97+10)*pow(16,power);
			else if(a[index]>='A'&&a[index]<='F') sum+=(a[index]-65+10)*pow(16,power);
			else;
			power++;
		}
	}
	printf("\n%ld",sum);
}
