#include <iostream>
#include <cmath>
using namespace std;

int main()
{int a, b, d, sa=0, sb=0;
cin>>a>>b;
    for(d=1;d<=sqrt(a);d++)
    {if(a%d==0)
        {sa=sa+d;
        if(d!=a/d && a/d!=a)
        {sa=sa+a/d;
        }}}
    for(d=1; d<=sqrt(b); d++)
    {if(b%d==0)
    {sb=sb+d;
    if(d!=b/d && b/d!=b)
    {sb=sb+b/d;}}}
    if(a==sb && b==sa)
    {cout<<"SUNT PRIETENE";}
    else
    {cout<<"NU SUNT PRIETENE";}
    return 0;
}
