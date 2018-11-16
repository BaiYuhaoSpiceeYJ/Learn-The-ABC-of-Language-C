#include <stdio.h>
#include <math.h>

double favg(int n,double x[])
{
	int i;
    double sum=0;
	for (i=0;i<=n-1;i++)
	{
		sum=sum+x[i];
	}
	sum=sum/n;
	return sum;
}

void max(int n,double x[])
{
	int i,j;
	double now;
	for (i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(x[j]>=x[j+1])
			{
				now=x[j];
				x[j]=x[j+1];
				x[j+1]=now;
			}
		}
	}

} 

double favg2(int n,double x[])
{
	int i;
	double sum=0;
	for (i=0;i<=n-1;i++)
	{
		sum=sum+x[i]*x[i];
	}
	sum=sum/n;
	return sum;
}

double favgxy(int n,double x[],double y[])
{
	int i;
	double sum=0;
	for (i=0;i<=n-1;i++)
	{
		sum=sum+x[i]*y[i];
	}
	sum=sum/n;
	return sum;
}

double fd(int n,double avgx,double x[])
{
	int i;
	double d=0;
	for(i=0;i<=n-1;i++)
	{
		d=d+(x[i]-avgx)*(x[i]-avgx);
	}
	d=d/(n);
	return d;
} 

double fs(int n,double avgx,double x[])
{
	int i;
	double d=0;
	for(i=0;i<=n-1;i++)
	{
		d=d+(x[i]-avgx)*(x[i]-avgx);
	}
	d=d/(n-1);
	return d;
} 


double lin(int n,double avgx,double avgy,double x[],double y[])
{
	int i;
	double b,fenmu,fenzi=0;
	for(i=0;i<=n-1;i++)
	{
		fenzi=fenzi+(x[i]-avgx)*(y[i]-avgy);
		fenmu=fenmu+(x[i]-avgx)*(x[i]-avgx);
	} 
	b=fenzi/fenmu;
	return b;
} 

int main()
{
	double x[100];
	double y[100];
	double avgx,avgy,sumx,sumy,maxx,maxy,minx,miny,avgx2,avgy2,sumx2,sumy2,avgxy,sumxy,d2x,d2y,dx,dy,s2x,s2y,sx,sy,vx,vy,covxy,r,b,a;
	int n,i;
	
	printf("the number of x=");
	scanf("%d",&n);
	
	
	printf("enter each x=");
	for(i=0;i<=n-1;i++)
	{
	    scanf("%lf",&x[i]);	
	} 
	
	printf("enter each y=");
	for(i=0;i<=n-1;i++)
	{
	    scanf("%lf",&y[i]);	
	} 
	
	avgx=favg(n,x);
	avgy=favg(n,y);
	
	sumx=avgx*n;
	sumy=avgy*n;
	
	avgx2=favg2(n,x);
	avgy2=favg2(n,y);
	
	sumx2=avgx2*n;
	sumy2=avgy2*n;
	
	avgxy=favgxy(n,x,y);
	sumxy=avgxy*n;
	
	d2x=fd(n,avgx,x);
	d2y=fd(n,avgy,y);
	
	dx=sqrt(d2x);
	dy=sqrt(d2y);
	
	s2x=fs(n,avgx,x);
	s2y=fs(n,avgy,y);
	
	sx=sqrt(s2x);
	sy=sqrt(s2y);
	
	covxy=avgxy-avgx*avgy;
	r=covxy/(dx*dy);
	
	b=lin(n,avgx,avgy,x,y);
	a=avgy-b*avgx;
	
	max(n,x);
	max(n,y);
	
	maxx=x[n-1];
	maxy=y[n-1];
	
	minx=x[0];
	miny=y[0];
	
	vx=dx/avgx;
	vy=dy/avgy;
	
	printf("the sort of x is ");
	for(i=0;i<=n-1;i++)
	{
	    printf("%lf ",x[i]);
    }
    printf("\n");
    printf("the sort of y is ");
	for(i=0;i<=n-1;i++)
	{
	    printf("%lf ",y[i]);
    }
    printf("\n");
	printf("the min of x is %lf\n",minx);
	printf("the min of y is %lf\n",miny);
	printf("the max of x is %lf\n",maxx);
	printf("the max of y is %lf\n",maxy);
	printf("the sum of is %lf\n",sumx);
	printf("the sum of is %lf\n",sumy);
	printf("the average of x is %lf\n",avgx);
	printf("the average of y is %lf\n",avgy);
	printf("the sum of x^2 is %lf\n",sumx2);
	printf("the sum of y^2 is %lf\n",sumy2);
	printf("the average of x^2 is %lf\n",avgx2);
	printf("the average of y^2 is %lf\n",avgy2);
	printf("the sum of x*y is %lf\n",sumxy);
	printf("the average of x*y is %lf\n",avgxy);
	printf("the d^2 of x is %lf\n",d2x);
	printf("the d^2 of y is %lf\n",d2y);
	printf("the d of x is %lf\n",dx);
	printf("the d of y is %lf\n",dy);
	printf("the s^2 of x is %lf\n",s2x);
	printf("the s^2 of y is %lf\n",s2y);
	printf("the s of x is %lf\n",sx);
	printf("the s of y is %lf\n",sy);
	printf("the vx of x is %lf\n",vx);
	printf("the vy of y is %lf\n",vy);
	printf("the cov of x and y is %lf\n",covxy);
	printf("the r of x and y is %lf\n",r);
	printf("the linear founction is y=%lfx+%lf\n",b,a); 
	
	return 0;
	
}
