#include <iostream>

using namespace std;

int main()
{
    int n,i,a,b,a1,b1,c,k;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>a>>b;
    k=0;
     a1=a;
     b1=b;
     while(a1!=b1)
     {if(a1>b1)
      a1-=b1;
      else
      b1-=a1;
     }
     while(a1)
     {c=a1%10;
     a1/=10;
     if(c%2==0)
     ++k;
     }
     if(k>1)
     cout<<a<<" "<<b<<"  ";
    }
    return 0;
}
