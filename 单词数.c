#include <stdio.h>
#include <math.h>

int main()
{
	int num,a,b=0,i,pos[20];
	char c[200];
	for (i=0;i<=180;i++)
	{
		c[i]=getchar();
		if (c[i]=='\n')break;
	}
	//输入c[] 
	
    if(c[0]==' ')
	{
	num=0;
	for(a=0;a<i;a++)
    {
     	if(c[a]==' '&&c[a+1]!=' '&&c[a+1]!='\n')
    	{
		    num=num+1;
		    pos[b]=a+1;
		    b++;
	    }
	}
   	printf("%d\n",num);
   	b=0;
   	for(a=0;a<i;a++)
   	{
   		if(a==pos[b])
   		{
   			b++;
   			if(c[a]>=97&&c[a]<=122)
   			printf("%c",c[a]-32);
   			else printf("%c",c[a]);
	 }
		else printf("%c",c[a]);
	}}
	else
	{
		num=1;
		for(a=0;a<i;a++)
    {
    	pos[0]=0;
     	if(c[a]==' '&&c[a+1]!=' '&&c[a+1]!='\n')
    	{
		    num=num+1;
		    pos[b+1]=a+1;
		    b++;
	    }
	}
		printf("%d\n",num);
   	b=0;
   	for(a=0;a<i;a++)
   	{
   		if(a==pos[b])
   		{
   			b++;
   			if(c[a]>=97&&c[a]<=122)
   			printf("%c",c[a]-32);
   			else printf("%c",c[a]);
	    }
		else printf("%c",c[a]);
	}}
	
	return 0;

}//思路 先输入数 判断第一个输入是否为空格 标记单词开始时的位置 判断大小写并输出 
