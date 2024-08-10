#include <iostream>

using namespace std;

int main()
{
    int a,i,n,ok,d,max=0;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>a;
     ok=1;
     for(d=2;d<=a/2;++d)
     if(a%d==0)
     ok=0;
     if(ok==1 && a>max)
     max=a;
    }
    cout<<max;
    return 0;
}
