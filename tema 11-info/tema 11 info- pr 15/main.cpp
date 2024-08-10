#include <iostream>

using namespace std;

int main()
{
    int n,i=2,d,ok=1,i1,nr=0;
    cin>>n;
    cout<<2<<" ";
    while(n-1)
    { ++i;
      ok=1;
      i1=i;
      nr=0;
      for(d=2;d<=i-1;++d)
      {if(i%d==0)
       ok=0;
      }
      if(ok==1)
      { while(i1)
        {nr=nr*10+i1%10;
         i1/=10;
        }
        for(d=2;d<=nr-1;++d)
      {if(nr%d==0)
       ok=0;
      }
      if(ok==1)
      {cout<<i<<" ";
      --n;}
    }
    }
    return 0;
}
