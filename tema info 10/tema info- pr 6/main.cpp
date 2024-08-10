#include <iostream>

using namespace std;

int main()
{
    int n,k,i,d,a;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    { a=0;
      for(d=1;d*d<=i;++d)
      {if(i%d==0)
        a=a+2;
        if(d*d==i)
        --a;}
      if(a>=k)
      cout<<i<<" ";
    }
    return 0;
}
