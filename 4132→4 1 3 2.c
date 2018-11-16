#include <stdio.h>
#include <math.h>
int main()
{
    long n,i=0,m,j;
    scanf("%ld",&n);
    /*if (n==0){}
    else{*/
    m=n;
    while (m/10!=0)
        {m=m/10;
        i=i+1;}
        j=i;
    for (j=i;j>=0;j--)
    {   m=n;
        //n=n/pow(10,j);
        printf("%2ld",(long)(n/pow(10,j))%10);

    }//}



}
