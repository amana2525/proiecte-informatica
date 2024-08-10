#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int n,d,s=0,k=0;
    cin>>n;
    for(d=1; d<=sqrt(n); d++)
    {
        if(n%d==0)
        {
            s=s+d;
            k++;
        }
        if(d!=n/d)
        {
            s=s+n/d;
            k++;
        }
    }
    float m=s/k;
    cout<<m;
    return 0;
}
