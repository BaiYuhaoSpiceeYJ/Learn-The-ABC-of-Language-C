#include <stdio.h>
void sort(int a[],int n)
{
    int i;
    int j;
    int m;
     /*for(i=0;i<n;i++){
        printf("%d",a[i]);
     }*/

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                m=a[j];
                a[j]=a[j+1];
                a[j+1]=m;
            }
        }
    }
    printf("Input array of 10 integers:After sorted the array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    int i;
    int a[100];
    printf("Input n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
}
