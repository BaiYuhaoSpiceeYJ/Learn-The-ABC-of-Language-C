#include <stdio.h>
int main()
{
    int n,a,b,c,i,y;
    printf("11 ");
    for(n=100;n<=999;n++)
    {
        a=n/100;
        b=n%100/10;
        c=n%10;
        y=0;

        if (a==c)
        {   y=0;
            for (i=2;i<=n-1;i++)
            {

                if (n%i==0)
                    {y=1;break;}


            }

           if(y==0)
            printf("%d ",n);
        }

}
}
