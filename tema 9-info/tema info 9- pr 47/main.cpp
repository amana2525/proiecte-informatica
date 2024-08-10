#include <iostream>

using namespace std;

int main()
{
    int k=0,a,b,i,d;
    cin>>a>>b;
    for(i=a;i<=b;++i)
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
