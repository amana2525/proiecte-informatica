#include <iostream>

using namespace std;

int main()
{
    int n,nr=1,nr2=9,i,i1,i2,i3,q,ok,c,k;
    cin>>n>>k;
    while(n-1)
    {nr=nr*10;
     nr2=nr2*10+9;
    --n;
    }
    for(i=nr;i<=nr2;++i)
    { i1=i;i2=i;i3=0;
    q=0;
      while(i1)
      {c=i1%10;
       if(c==2)
        ok=1;
       else if(c==3)
        ok=1;
       else if(c==5)
        ok=1;
       else if(c==7)
        ok=1;
       else
        ok=0;
       if(ok==1)
        ++q;
        i1/=10;
      }
      while(i2)
      {i3=i3*10+i2%10;
      i2/=10;
      }
      if(i==i3 && q==k)
      cout<<i<<" ";
    }
    return 0;
}
