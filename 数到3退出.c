#include <stdio.h>
int main()
{
    int n,i,count=1,stop,m,num,ii;
    int static s[100];
    printf("Input n:");
    scanf("%d",&n);
    for (i=0;i<=n-1;i++)
    {
        s[i]=1;
    }

    for (m=0;m<=20;m++)
    {   num=0;
        for (i=0;i<=n-1;i++)
        {
            if(count==3&&s[i]==1)
            {
                s[i]=0;
                count=1;
                printf("%d ",i+1);
            }
            if(count!=3&&s[i]==1)
            {
                count++;
            }

        }
        for (i=0;i<=n-1;i++)
            {
                if (s[i]==1)
                    {num++;
                    ii=i+1;}
            }
        if(num==1)
        {
             printf("\nLast No. is:%d",ii);
            break;
        }

    }

    return 0;
}
