#include <stdio.h>
#include <math.h>

double favg(int n,double x[])//ƽ��ֵ���� 
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

void max(int n,double x[])//������
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

double favg2(int n,double x[])//��ƽ��ֵ���� 
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

double favgxy(int n,double x[],double y[])//xy��ֵ���� 
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

double fd(int n,double avgx,double x[])//���巽���
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

double fs(int n,double avgx,double x[])//���������
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


double lin(int n,double avgx,double avgy,double x[],double y[])//�ع鷽�̺���
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
	
	printf("�������Ա���x�ĸ���:");
	scanf("%d",&n);
	
	
	printf("����������ÿ��x��ֵ���м��ÿո������������ɺ��밴�س�:");
	for(i=0;i<=n-1;i++)
	{
	    scanf("%lf",&x[i]);	
	} 
	
	printf("����������ÿ��y��ֵ���м��ÿո������������ɺ��밴�س�:");
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
	
	printf("������xΪ��");
	for(i=0;i<=n-1;i++)
	{
	    printf("%lf ",x[i]);
    }
    printf("\n");
    printf("������yΪ��");
	for(i=0;i<=n-1;i++)
	{
	    printf("%lf ",y[i]);
    }
    printf("\n");
	printf("x����СֵΪ��%lf\n",minx);
	printf("y����СֵΪ��%lf\n",miny);
	printf("x�����ֵΪ��%lf\n",maxx);
	printf("y�����ֵΪ��%lf\n",maxy);
	printf("x�ĺ�Ϊ��%lf\n",sumx);
	printf("y�ĺ�Ϊ��%lf\n",sumy);
	printf("x��ƽ��ֵΪ��%lf\n",avgx);
	printf("y��ƽ��ֵΪ��%lf\n",avgy);
	printf("x��ƽ���ĺ�Ϊ��%lf\n",sumx2);
	printf("y��ƽ���ĺ�Ϊ��%lf\n",sumy2);
	printf("x��ƽ����ƽ��ֵΪ��%lf\n",avgx2);
	printf("y��ƽ����ƽ��ֵΪ��%lf\n",avgy2);
	printf("x*y�ĺ�Ϊ��%lf\n",sumxy);
	printf("x*y��ƽ��ֵΪ��%lf\n",avgxy);
	printf("x�����巽��Ϊ��%lf\n",d2x);
	printf("y�����巽��Ϊ��%lf\n",d2y);
	printf("x�������׼��Ϊ��%lf\n",dx);
	printf("y�������׼��Ϊ��%lf\n",dy);
	printf("x����������Ϊ��%lf\n",s2x);
	printf("y����������Ϊ��%lf\n",s2y);
	printf("x��������׼��Ϊ��%lf\n",sx);
	printf("y��������׼��Ϊ��%lf\n",sy);
	printf("x��y��Э����Ϊ��%lf\n",covxy);
	printf("x��y���������ϵ��Ϊ��%lf\n",r);
	printf("x��y�Ļع鷽��Ϊ��y=%lfx+%lf\n",b,a); 
	
	return 0;
	
}
