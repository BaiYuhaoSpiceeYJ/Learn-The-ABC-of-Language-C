#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int a[4];
    long i,m;
    scanf("%d",&n);
    if (n>=10000&&n<=999)
    return 0;
    else
    {

       a[0]=n/1000;
       a[1]=n/100%10;
       a[2]=n/10%10;
       a[3]=n%10;
       printf("%d=",n);
       for(i=0;i<=3;i++)
       {
           if (a[i]!=0&&i!=3&&a[i+1]!=0)
           {
               m=pow(10,3-i);
               printf("%ld*%ld+",a[i],m);
           }

           if (a[i]!=0&&i!=3&&a[i+1]==0)
           {
               m=pow(10,3-i);
               printf("%ld*%ld",a[i],m);
           }
            if (a[i]==0&&i!=3&&a[i+1]!=0)
           {
               
               printf("+");
           }
           if (a[i]!=0&&i==3)
           {
               printf("%d*1",a[i]);
           }
       }
    }
}
