#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1,d,nr=0,n,k=0;
    cin>>n1;
    for(n=1;n<=n1;n++)
    { k=0;
      for(d=1;d<=sqrt(n);d++)
    { if(n%d==0)
      k++;
      if(d!=sqrt(n))
      k++;
    }
    if(k==3)
    nr++;
    }
    cout<<nr-1;
    return 0;
}
