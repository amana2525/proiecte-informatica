#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,d,s=0;
    cin>>n;
    for(d=2;d<=sqrt(n);d++)
    {if(n%d==0)
     {s=s+d;
     if(n!=d)
     {
     s=s+n/d;}}}
     if(s==0)
     cout<<"e prim";
     s=s+1+n;
     cout<<s;
    return 0;
}
