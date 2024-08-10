#include <iostream>

using namespace std;

int main()
{
    int n,a,c,max=0,maxc,i,a1;
    cin>>n;
    cin>>a;
    while(a)
    {c=a%10;
     a/=10;
     if(c>max)
     max=c;
    }
    for(i=2;i<=n;++i)
    {cin>>a;
     a1=a;
     maxc=0;
     while(a1)
     {c=a1%10;
      a1=a1/10;
      if(c>maxc)
      maxc=c;
     }
     if(max==maxc)
     cout<<a<<" ";
    }
    return 0;
}
