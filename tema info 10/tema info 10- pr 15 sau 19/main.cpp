#include <iostream>

using namespace std;

int main()
{
    int n,max=0,a,i,d,p=1;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>a;
     p=1;
     for(d=2;d*d<=a;++d)
     {if(a%d==0)
      p=0;
     }
     if(p==1 && a>=max)
     max=a;
    }
    cout<<max;
    return 0;
}
