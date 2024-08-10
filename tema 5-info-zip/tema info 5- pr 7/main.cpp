#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int n,d,div1,div2;
    cin>>n;
    div1=n; div2=n;
    for(d=1; d<=sqrt(n); d++)
    {if(n%d==0 && d<div1 && d!=1)
    {div1=d;}
    if(n%d==0 && div1<d && d<div2)
    {div2=d;}
    if(d!=n/d && div1<n/d && n/d<div2)
    {div2=n/d;}
    }
    cout<<div1+div2;
    return 0;
}
