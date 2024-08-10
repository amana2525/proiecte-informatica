#include <iostream>

using namespace std;

int main()
{
    int n,i,d,k=0;
    cin>>n;
    for(i=2;i*i<=n;++i)
    { k=0;
      for(d=2;d*d<=i;++d)
      {if(i%d==0)
       ++k;
      }
      if(k==0)
      cout<<i*i<<" ";
    }
    return 0;
}
