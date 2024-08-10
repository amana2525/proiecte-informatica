#include <iostream>

using namespace std;

int main()
{
    int n,i,a,a1,a2,d,k=0,ok;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
     a1=a;
     a1=0;
     ok=1;
     while(a1)
     {a2=a2*10+a1%10;
      a1/=10;
     }
     for(d=2;d<=a2/2;d++)
     {if(a2%d==0)
      ok=0;
     }
     if(ok==1)
        ++k;
    }
    if(k==n)
    cout<<"toate";
    else
    cout<<"nu";
    return 0;
}
