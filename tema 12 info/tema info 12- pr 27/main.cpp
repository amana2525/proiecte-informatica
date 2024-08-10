#include <iostream>

using namespace std;

int main()
{
    int n,a,b,x,y,q,k,m,n1,i,ok1,ok2,nr;
    cin>>n;
    cin>>b;
    for(i=1;i<=n;++i)
    {cin>>a;
     x=a;
     y=b;
     q=0;
     k=0;
     m=0;
     n1=0;
     while(x)
    {nr=(x%100-x%10)/10;
    if(x%10>nr)
    {q++;}
    x=x/10;
    k++;
    }
    if(k==q)
    ok1=1;
    else
    ok1=0;
    while(y)
    {nr=(y%100-y%10)/10;
    if(y%10<nr)
    {m++;}
    y=y/10;
    n1++;
    }
    if(n1==m)
    ok2=1;
    else
    ok2=1;
    if(ok1==1 && ok2==1)
    cout<<a<<" "<<b<<", ";
    b=a;
    }
    return 0;
}
