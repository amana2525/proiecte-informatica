#include <iostream>

using namespace std;

int main()
{
    int n,nr=1,nr2=9,i,s=0,p;
    cin>>n;
    while(n-1)
    {nr=nr*10;
     nr2=nr2*10+9;
    --n;
    }
    for(i=nr;i<=nr2;++i)
    { p=i;s=0;
      while(p)
      {s=s+p%10;
       p/=10;
      }
      if(i%s==0)
      cout<<i<<" ";
    }
    return 0;
}
