#include <iostream>

using namespace std;

int main()
{
    int a,b,i,d,p,s=0;
    cin>>a>>b;
    for(i=a;i<=b;++i)
    { p=1;
      for(d=2;d*d<=i;++d)
      {if(i%d==0)
       p=0;}
      if(p==1)
      s+=i;
    }
    cout<<s;
    return 0;
}
