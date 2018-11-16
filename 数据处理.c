#include <stdio.h>
int main()
{
    int a[10];
    int b[10];
    int i,max,sum=0,sit;
    float average;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    max=0;
    for(i=0;i<=8;i++)
    {
        if(a[i+1]>a[i])
            max=i+1;
    }
    printf("Max=a[%d]=%d",max,a[max]);
    printf(" ");
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    average=sum*1.00/10;
    printf("%.1f",average);

    for(i=0;i<=9;i++)
    {
        b[n]=a[n]-average;
    }
    for(i=0;i<=9;i++)
    {
        b[n]=a[n]-average;
    }


}
