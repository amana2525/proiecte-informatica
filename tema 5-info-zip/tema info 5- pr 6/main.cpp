#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int n, d, a, b, k=0, min, max, maxk;
    cin>>a;
    cin>>b;
    min=a;
    max=a;
    for(d=1; d<=sqrt(n); d++)
    {
        if(a%d==0 && d%2==0)
        {
            k++;
        }
        if(d!=n/d && n/d%2==0)
        {
            k=k++;
        }
    }
    maxk=k;
    for(n=a; n<=b; n++)
    {k=0;
        for(d=1; d<=sqrt(n); d++)
        {
            if(n%d==0 && d%2==0)
            {k++;
            }
            if(d!=n/d && n/d%2==0)
            {k++;
            }
        }
        if(k>maxk)
        {   maxk=k;
            max=n;
            min=n;
        }
        if(k==maxk && n>max)
        {max=n;
        }
        if(k==maxk && n<min)
        {min=n;
        }
    }
    cout<<max<<" "<<maxk<<endl;
    cout<<min;
    return 0;
}
