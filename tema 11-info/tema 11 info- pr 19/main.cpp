#include <iostream>

using namespace std;

int main()
{
    int n,a,i,a1,s;
    cin>>n;
    for(i=1;i<=n;++i)
    { cin>>a;
      a1=a;s=0;
      while(a1)
      {s=s+a1%10;
       a1/=10;
      }
      if(s%3==0)
      cout<<a<<" verifica"<<endl;
    }
    return 0;
}
