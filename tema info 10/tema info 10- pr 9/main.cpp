#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1,d,nr=0,n,max=0,a,k=0;
    cin>>n1>>a;
    for(n=1;n<=n1;n++)
    { k=0;
      for(d=1;d<=sqrt(n);d++)
    { if(n%d==0)
      {k++;
      if(d!=sqrt(n))
      k++;}
    }
    if(k==a && n>=max)
    nr=n;
    }
    cout<<nr;
    return 0;
}
