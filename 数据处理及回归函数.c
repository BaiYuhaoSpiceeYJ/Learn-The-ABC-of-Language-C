#include <stdio.h>
#include <math.h>

double favg(int n,double x[])//平均值函数 
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

void max(int n,double x[])//排序函数
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

double favg2(int n,double x[])//方平均值函数 
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

double favgxy(int n,double x[],double y[])//xy均值函数 
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

double fd(int n,double avgx,double x[])//总体方差函数
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

double fs(int n,double avgx,double x[])//样本方差函数
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


double lin(int n,double avgx,double avgy,double x[],double y[])//回归方程函数
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
	double avgx,avgy,sumx,sumy,maxx,maxy,minx,miny,avgx2,avgy2,sumx2,sumy2,avgxy,sumxy,d2x,d2y,dx,dy,s2x,s2y,sx,sy,covxy,r,b,a;
	int n,i;
	
	printf("请输入自变量x的个数:");
	scanf("%d",&n);
	
	
	printf("请依次输入每个x的值，中间用空格隔开，输入完成后请按回车:");
	for(i=0;i<=n-1;i++)
	{
	    scanf("%lf",&x[i]);	
	} 
	
	printf("请依次输入每个y的值，中间用空格隔开，输入完成后请按回车:");
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
	
	printf("排序后的x为：");
	for(i=0;i<=n-1;i++)
	{
	    printf("%lf ",x[i]);
    }
    printf("\n");
    printf("排序后的y为：");
	for(i=0;i<=n-1;i++)
	{
	    printf("%lf ",y[i]);
    }
    printf("\n");
	printf("x的最小值为：%lf\n",minx);
	printf("y的最小值为：%lf\n",miny);
	printf("x的最大值为：%lf\n",maxx);
	printf("y的最大值为：%lf\n",maxy);
	printf("x的和为：%lf\n",sumx);
	printf("y的和为：%lf\n",sumy);
	printf("x的平均值为：%lf\n",avgx);
	printf("y的平均值为：%lf\n",avgy);
	printf("x的平方的和为：%lf\n",sumx2);
	printf("y的平方的和为：%lf\n",sumy2);
	printf("x的平方的平均值为：%lf\n",avgx2);
	printf("y的平方的平均值为：%lf\n",avgy2);
	printf("x*y的和为：%lf\n",sumxy);
	printf("x*y的平均值为：%lf\n",avgxy);
	printf("x的总体方差为：%lf\n",d2x);
	printf("y的总体方差为：%lf\n",d2y);
	printf("x的总体标准差为：%lf\n",dx);
	printf("y的总体标准差为：%lf\n",dy);
	printf("x的样本方差为：%lf\n",s2x);
	printf("y的样本方差为：%lf\n",s2y);
	printf("x的样本标准差为：%lf\n",sx);
	printf("y的样本标准差为：%lf\n",sy);
	printf("x、y的协方差为：%lf\n",covxy);
	printf("x、y的线性相关系数为：%lf\n",r);
	printf("x、y的回归方程为：y=%lfx+%lf\n",b,a); 
	
	return 0;
	
}
