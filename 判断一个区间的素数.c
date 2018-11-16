#include <stdio.h>
int main()
{
    int m,n,j,i,count,count2,count3;
    scanf("%d %d",&m,&n);
    if (m<n)
    {count2=0;count3=0;
        for (i=m;i<=n;i++)
        {

            count=0;
            for(j=2;j<=i-1;j++)
            {

                if(i%j==0)
                    count++;
            }
            if(count==0)
            {
                count2++;
                printf("%d ",i);
                count3++;if(count3==7)
                printf("\n");
            }

        }
    if (count2==0)

        printf("None");}
       if (m>n)
    {count2=0;
    count3=0;
        for (i=m;i>=n;i--)
        {

            count=0;
            for(j=2;j<=i-1;j++)
            {

                if(i%j==0)
                    count++;
            }
            if(count==0)
            {
                count2++;
                printf("%d ",i);
                count3++;if(count3==7)
                printf("\n");
            }


        }
    if (count2==0)

        printf("None");}
}
