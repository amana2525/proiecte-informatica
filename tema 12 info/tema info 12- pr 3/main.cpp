#include <iostream>

using namespace std;

int main()
{
    int n,i,d,p,sc=0,ad,n1,a;
    cin>>n;
    for(i=2;i<=n;i++)
    { p=1;
      for(d=2;d<=i/2;d++)
      {if(i%d==0)
      p=0;}
      if(p==1 && i>sc)
      sc=i;
    }
    a=n;
    n1=n;
    while(n)
    { p=1;
      for(d=2;d<=a/2;d++)
      {if(a%d==0)
      p=0;}
      if(p==1)
      {ad=a;
       n=0;}
      else
      ++a;
    }
    p=ad-n1;
    i=n1-sc;
    if(p>i)
    cout<<sc;
    else
    cout<<ad;
    return 0;
}
