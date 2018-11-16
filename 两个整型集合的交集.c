#include <stdio.h>
int sort(int a[5],int b[5],int c[10])
{
    int i,j;
	int static d[10];
    for(i=0;i<=4;i++)
    {
        c[i]=a[i];
    }
    for (i=0;i<=4;i++)
    {
        c[i+5]=b[i];
    }
 /*for(i=0;i<=9;i++)
    {
        printf("%d ",c[i]);
    }*/
    printf("A B intersection is:");
    for (i=0;i<=8;i++)
    {
    	for(j=i+1;j<=9;j++)
    	if(c[i]==c[j]&&d[i]==0)
    	{
    		printf("%d ",c[i]);
    		d[i]=1;
    		d[j]=1;
		}
	}
    
    
}
int main()
{
    int i,j,a[5],b[5],c[10];
    printf("Please Enter Array A,5 digits: ");
    for (i=0;i<=4;i++)
    {
    	scanf("%d",&a[i]);
	}
    printf("Please Enter Array B,5 digits: ");
     for (i=0;i<=4;i++)
    {
    	scanf("%d",&b[i]);
	}
	sort(a,b,c);
    return 0;
}
