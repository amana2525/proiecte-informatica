#include <iostream>

using namespace std;

int main()
{
    int n,i,a,a1,d,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
     a1=a;
     k=0;
     d=2;
     while(a1>1)
     {if(a1%d==0)
      {while(a1%d==0)
      a1/=d;
      ++k;}
      ++d;
     }
     if(k==3)
     cout<<a<<" ";
    }
    return 0;
}
