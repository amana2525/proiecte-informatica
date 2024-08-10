#include <iostream>

using namespace std;

int main()
{
    int n, x, k=0, maxk=0, max;
    cout<<"n="; cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        k=0;
        for(int d=1; d<=x; d++)
        {
            int s=0;
            for(int b=2; b<d; b++)
            {
                if(d%b==0)
                {
                    s=s+1;
                }
            }
            if(s==0 && x%d==0)
            {
                k=k+1;
            }
        }
            if(k==maxk)
            {
                if(x<max)
                {
                    max=x;
                }
            }
            if(k>maxk)
            {
                maxk=k;
                max=x;
            }
    }
    cout<<max;
    return 0;
}
