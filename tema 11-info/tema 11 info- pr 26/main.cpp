#include <iostream>

using namespace std;

int main()
{
    int n,nr=1,nr2=9,i,s,s1,i1,ok;
    n=4;
    cin>>s;
    while(n-1)
    {nr=nr*10;
     nr2=nr2*10+9;
    --n;
    }
    for(i=nr;i<=nr2;++i)
    { i1=i;ok=1;s1=0;
    while(i1>9)
    {if(i1/10%10>=i1%10)
    ok=0;
    s1=s1+i1%10;
    i1=i1/10;
    }
    s1=s1+i1;
    if(ok==1 && s1==s)
    cout<<i<<" ";
    }
    return 0;
}
