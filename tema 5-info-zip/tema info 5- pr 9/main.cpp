#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,x,a=0,d,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>x;
        while(x!=0)
        {a=a*10+x%10;
        x=x/10;}
        for(d=1;d<=sqrt(a);d++)
        {if(a%d==0)
        {s=s+d;
        if(d!=a/d)
        {s=s+a/d;}}}}
    cout<<s;
    return 0;
}

