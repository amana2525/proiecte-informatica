#include <iostream>

using namespace std;

int main()
{
    int a,b,i,nr,n;
    cin>>a>>b;
    for(i=a;i<=b;++i)
    {n=i;nr=0;
    while(n)
    {nr=nr*10+n%10;
    n/=10;
    }
    if(nr==i)
    cout<<i<<" ";
    }
    return 0;
}
