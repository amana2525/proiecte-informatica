#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m,l=0,d,n,i1,i,a,b,k;
    cin>>a>>b>>k;
    for(i=a;i<=b;i++)
    {i1=i;
     m=0;
     for(d=1;d<=sqrt(i1);d++)
     if(i1%d==0)
     {m++;
      if(i1/d!=d)
      m++;}
      if(m==k)
      l++;
    }
    cout<<l;
    return 0;
}
