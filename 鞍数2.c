 	#include <stdio.h>
 	#include <math.h>
	
	int main()
 	{
 	    float a[6][6];
 	    static int b[6][6];
 	    int i,j,n,max,min,flag=0,im,jm,same=1;
 	
	    scanf("%d",&n);
 	    
 	    for(i=0;i<n;i++)
	    {
 	        for(j=0;j<n;j++)
	        {
 	            scanf("%d",&a[i][j]);
	        }
	    }
 	    
 	    for(i=0;i<n;i++)
 	    {
 	        max=0;
	        for(j=1;j<n;j++)
	        {
 	            if(a[i][j]>a[i][max]) max=j;
	        }
 	        b[i][max]++;
 	        for(j=0;j<n;j++)
 	        {
	            if(a[i][j]==a[i][max]&&j!=max) b[i][j]++;
 	        }
	    }
 	    same=1;
 	    for(j=0;j<n;j++)
	    {
 	        min=0;
 	        for(i=0;i<n;i++)
	        {
	            if(a[i][j]<a[min][j]) min=i;
	        }
 	        b[min][j]++;
 	        for(i=0;i<n;i++)
 	        {
 	            if(a[i][j]==a[min][j]&&i!=min) b[i][j]++;
 	        }
 	    }
 	    
 	    for(i=0;i<n;i++)
 	     {
			    for(j=0;j<n;j++)
	        {
 	            if(b[i][j]==2)
 	            {
 	                im=i;
 	                jm=j;
	                flag++;
 	            }
 	        }
	    }
	    
	    if(flag==1) printf("%d %d",im,jm);
	    else printf("NO");
 	    return 0;
	}
