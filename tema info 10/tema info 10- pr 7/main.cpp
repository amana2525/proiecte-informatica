#include <iostream>

using namespace std;

int main()
{
    int a,i,b,d,n1,n2,k1,k2;
    cin>>a>>b;
    for(i=a;i<=b;++i)
    { n1=i-1;
      n2=i+1;
      k1=1;
      for(d=2;d*d<=n1;++d)
      {if(n1%d==0)
      k1=0;
      }
      k2=1;
      for(d=2;d*d<=n2;++d)
      {if(n2%d==0)
       k2=0;}
      if(k1==1&&k2==1)
     cout<<i<<" ";
    }


    return 0;
}
