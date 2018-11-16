#include <stdio.h>

int main()
{
    int a,n1=0,n2=0;
    float sum1=0.0,sum2=0.0;
    scanf("%d",&a);
    while(a!=0)
    {

        if(a%2!=0)//ÆæÊı
        {
            n1++;
            sum1=sum1+a;
        }
        else //Å¼Êı
        {

            n2++;
            sum2=sum2+a;
        }
    scanf("%d",&a);
    }
    if (n1!=0)
        sum1=sum1/n1;
    else sum1=0;
    if (n2!=0)
        sum2=sum2/n2;
    else sum2=0;

    printf("%d %.2f\n",n1,sum1);
    printf("%d %.2f",n2,sum2);

    return 0;
}
