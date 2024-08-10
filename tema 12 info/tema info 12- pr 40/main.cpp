#include <iostream>

using namespace std;

int main()
{
    int n, x, max=2, max2=1, max3=0, k=0;
    cout<<"n="; cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x; int a=0, x1=x;;
        while(x!=0)
        {
            int s=0;
            if(x%10!=1)
            {for( int d=2; d<x%10; d++)
            {
                if(x%10%d==0)
                {
                    s=s+1;
                }
            }
            if(s==0)
            {
                a=a+x%10;
            }
            }
            x=x/10;
        }
        k=0;
        for(int d=2; d<a; d++)
        {
            if(a%d==0)
            {
                k=k+1;
            }
        }
        if(k==2)
        {
            if(x1>max)
            {
                max3=max2;
                max2=max;
                max=x1;
            }
            else if(x1>max2)
            {
                max3=max2;
                max2=x1;
            }
            else if(x1>max3)
            {
                max3=x1;
            }
        }
    }
    cout<<max<<" "<<max2<<" "<<max3;
    return 0;
}
