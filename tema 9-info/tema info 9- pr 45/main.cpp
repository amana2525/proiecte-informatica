#include <iostream>

using namespace std;

int main()
{
    int n,d,i,max=0,maxval=0,k=0,k1=0;
    cin>>n;
    for(d=1;d*d<=n;++d)
    {if(n%d==0)
      k1+=2;
      if(d*d==n)
      k1--;
     }
    for(i=1;i<n;++i)
    {k=0;
     for(d=1;d*d<=i;++d)
     {if(i%d==0)
      k+=2;
      if(d*d==i)
      k--;
     }
     if(k>max)
     max=k;
     maxval=i;
    }
    if(k1>max)
    cout<<"e puternic";
    else
    cout<<"nu e puternic, in schimb "<<maxval<<" e puternic";
    return 0;
}
