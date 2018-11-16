#include <stdio.h>
int sort(int a[100],int b[100],int n,int m,int c[200])
{
    int i,j=m+n-1;
    int x,y,va;
    for(i=0;i<=n-1;i++)
    {
        c[i]=a[i];
    }
    for (i=0;i<=m-1;i++)
    {
        c[i+n]=b[i];
    }
 /*for(i=0;i<=j;i++)
    {
        printf("%d ",c[i]);
    }*/
    for(x=0;x<=j;x++)
    {
        for(y=0;y<=j-1;y++)
        {
            if(c[y]>=c[y+1])
            {
                va=c[y];
                c[y]=c[y+1];
                c[y+1]=va;
            }
        }
    }
    for(i=0;i<=j;i++)
    {
        printf("%4d",c[i]);
    }
}
int main()
{
    int n,m,i,j,a[100],b[100],c[200];
    printf("Enter n: ");
    scanf("%d",&n);
	printf("Enter %d integers: ",n);
	
	for (i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter m: ");
    scanf("%d",&m);
    
    printf("Enter %d integers: ",m);
    for (i=0;i<=m-1;i++)
    {
        scanf("%d",&b[i]);
    }

    sort(a,b,n,m,c);
    return 0;
}
