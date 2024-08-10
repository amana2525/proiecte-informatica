#include <iostream>

using namespace std;

int main()
{
    int n,i,a,a1,s,d,max=0,maxnr;
    cin>>n;
    for(i=1;i<=n;++i)
    { cin>>a;
      a1=a;
      d=2;
      s=0;
      while(a1>1)
      { if(a1%d==0)
       {s=s+d;
        while(a1%d==0)
        a1/=d;
       }
       ++d;
      }
      if(s>max)
      {max=s;
      maxnr=a;}
    }
    cout<<a;
    return 0;
}
