#include <iostream>

using namespace std;

int main()
{
    int a,b,d,n,i,ok;
    cin>>a>>b;
    for(i=a;i<=b;++i)
    { ok=1;
      for(d=2;d<=i/2;++d)
      {if(i%d==0)
      ok=0;}
      if(ok==1)
      cout<<i<<" ";
    }
    return 0;
}
