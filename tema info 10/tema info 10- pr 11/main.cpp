#include <iostream>

using namespace std;

int main()
{
    int n1,k=0,n,p=1,d;
    cin>>n;
    n1=n;
    while(n)
    {k=0;
     for(d=2;d*d<=n;++d)
     {if(n%d==0)
      ++k;
     }
     if(k!=0)
     p=0;
     n/=10;
    }
    if(p==1)
    {while(n1)
     {cout<<n1<<" ";
      n1/=10;
     }
    }
    else
    cout<<p;
    return 0;
}
