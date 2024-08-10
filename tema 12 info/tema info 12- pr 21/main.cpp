#include <iostream>

using namespace std;

int main()
{
    int n,i,i1,i2,a,a1,a2,sc=0,ad,n1,p;
    cin>>n;
    for(i=2;i<=n;i++)
    { i1=i;
      i2=0;
      while(i1)
      {i2=i2*10+i1%10;
       i1/=10;
      }
      if(i==i2 && i>sc)
      sc=i;
    }
    a=n;
    n1=n;
    while(n)
    { a1=a;
      a2=0;
      while(a1)
      {a2=a2*10+a1%10;
       a1/=10;
      }
      if(a2==a)
      {ad=a;
      n=0;}
      else ++a;
    }
    p=ad-n1;
    i=n1-sc;
    if(p>i)
    cout<<sc;
    else
    cout<<ad;
    return 0;
}
