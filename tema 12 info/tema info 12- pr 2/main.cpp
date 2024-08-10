#include <iostream>

using namespace std;

int main()
{
    int n,a,a1,i,d,p,ok;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>a;
     a1=a;
     d=2;
     p=0;
     ok=1;
     while(a1>1)
     {if(a1%d==0)
      {p=0;
       while(a1%d==0)
       { a1/=d;
         ++p;
       }
       if(p>1)
       ok=0;
      }
      ++d;
     }
     if(ok==1)
    cout<<a<<" respecta condiitiile"<<endl;
    }
    return 0;
}
