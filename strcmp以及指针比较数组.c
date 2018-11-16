#include <stdio.h>
#include <string.h>
int main()
{
	char *aa,*bb,*cc;
	char a[100];
	char b[100];
	char c[100];
	printf("Enter 3 strings:\n");
	gets(a);
	gets(b);
	gets(c);
	aa=a;
	bb=b;
	cc=c;
	if(strcmp(aa,bb)>0)
	{
		if(strcmp(aa,cc)>0)
		printf("The largest string is %s",aa);
	}
	if(strcmp(bb,aa)>0)
	{
		if(strcmp(bb,cc)>0)
		printf("The largest string is %s",bb);
	}
	if(strcmp(cc,aa)>0)
	{
		if(strcmp(cc,bb)>0)
		printf("The largest string is %s",cc);
	}
	return 0;
}
