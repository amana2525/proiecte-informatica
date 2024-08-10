#include <iostream>

using namespace std;

int main()
{
    int n,k,n1,a=1,n2=0,nr=0;
    cin>>n>>k;
    n1=n;
    while(n)
    {nr++;
     n/=10;
    }
    while(nr)
    {a=10*a;
     nr--;
    }
    while(k)
    {n2=n2*a+n1;
     k--;
    }
    cout<<n2%72;
    return 0;
}
