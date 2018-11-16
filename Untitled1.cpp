#include <iostream>
using namespace std;

int main()
{
    int a,b,n=0;
    for(a=2;a<=1000;a++)
    {
        for(b=1;b<=a-1;b++)
        {
            if ((a+b)%(a-b)!=0)
            {
                n++;
                cout<<"["<<a<<"."<<b<<"] ";
            }
        }
    }
    cout<<n;
}
