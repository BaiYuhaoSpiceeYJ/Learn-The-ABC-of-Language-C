#include <stdio.h>
int main()
{
    int n,i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=10-i;j++)
        {printf("%d*%d=%2d ",i,j+i-1,i*(j+i-1));


        }
        printf("\n");}

        return 0;







}
