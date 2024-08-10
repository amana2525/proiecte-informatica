#include <iostream>

using namespace std;

int main()
{
    int a,b,d,s,i;
    cin>>a>>b;
    for(i=a;i<=b;++i)
    {s=1;
     for(d=2;d*d<=i;d++)
     {if(i%d==0)
      {s+=d;
       s+=i/d;
      }
      if(d*d==i)
      s-=d;
     }
     if(s==i)
     cout<<i<<" ";

    }
    return 0;
}
