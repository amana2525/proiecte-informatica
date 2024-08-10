#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,d,nr=0,n,k=0;
    cin>>a>>b;
    for(n=a;n<=b;n++)
    {for(d=1;d<=sqrt(n);d++)
    { if(n%d==0)
      k++;
      if(d!=sqrt(n))
      k++;
    }
    if(k==3)
    nr++;
    }
    cout<<nr;
    return 0;
}
