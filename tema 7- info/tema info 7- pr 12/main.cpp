#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,s=0,d,k=0;
    cin>>n;
     for(d=2;d<=sqrt(n);d++)
     {if(n%d==0)
     {s=s+d;
      if(n/d!=d)
      s=s+n/d;
      }
      }
      if(s+1==n)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
