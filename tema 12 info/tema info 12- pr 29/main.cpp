#include <iostream>

using namespace std;

int main()
{
    int n,a,a1,i,q,k,k1,p,c;
    cin>>n>>k;
    cin>>a;
    a1=a;
    while(a1)
    {q++;
     a1/=10;
    }
    k1=q-k;
    while(k1)
    {p=p*10;
     --k1;
    }
    c=(a%p)%10;

    for(i=2;i<=n;++i)
    {cin>>a;
    a1=a;
    p=0;
    q=0;
    while(a1)
    {q++;
     a1/=10;
    }
    k1=q-k;
    while(k1)
    {p=p*10;
     --k1;
    }
    a1=(a%p)%10;
    if(a1==c)
    cout<<a<<" ";
    }
    return 0;
}
