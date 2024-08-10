#include <iostream>

using namespace std;

int main()
{
    int k=0,n,i,d;
    cin>>n;
    for(i=2;i<=n;++i)
    {k=0;
     for(d=2;d*d<=i;++d)
     {if(i%d==0)
      ++k;
     }
     if(k==0)
     cout<<i<<" ";
    }
    return 0;
}
