#include <iostream>

using namespace std;

int main()
{
    int n,a,a1,i,d,s,s1;
    cin>>n;
    for(i=1;i<=n;i++)
    { cin>>a;
      a1=a;
      d=2;
      s=0;
      while(a1>1)
      {if(a1%d==0)
       {s=s+d;
       while(a1)
       {a1/=10;
       }
       }
       ++d;
       }
       if(s%2==0)
       s1=s1+a;
      }
    cout<<s1;
    return 0;
}
